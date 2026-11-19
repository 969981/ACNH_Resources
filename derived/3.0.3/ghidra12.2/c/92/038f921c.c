
bool FUN_038f921c(float *param_1,float *param_2)

{
  if (((((*(short *)((long)param_1 + 0x26) == *(short *)((long)param_2 + 0x26)) &&
        (*(char *)(param_1 + 7) == *(char *)(param_2 + 7))) &&
       (*(char *)((long)param_1 + 0x1d) == *(char *)((long)param_2 + 0x1d))) &&
      (((*(char *)((long)param_1 + 0x1e) == *(char *)((long)param_2 + 0x1e) &&
        (*(char *)((long)param_1 + 0x1f) == *(char *)((long)param_2 + 0x1f))) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_2 + 8) &&
        ((*(char *)((long)param_1 + 0x21) == *(char *)((long)param_2 + 0x21) &&
         (param_1[4] == param_2[4])))))))) &&
     ((param_1[5] == param_2[5] &&
      (((((param_1[6] == param_2[6] &&
          (*(char *)((long)param_1 + 0x22) == *(char *)((long)param_2 + 0x22))) &&
         (*(char *)((long)param_1 + 0x23) == *(char *)((long)param_2 + 0x23))) &&
        ((*(char *)(param_1 + 9) == *(char *)(param_2 + 9) && (*param_1 == *param_2)))) &&
       ((param_1[1] == param_2[1] && (param_1[2] == param_2[2])))))))) {
    return param_1[3] == param_2[3];
  }
  return false;
}

