mod <- lm(mpg ~ hp + gear, data = mtcars)

saveRDS(mod, "model.Rds")
