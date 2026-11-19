
void FUN_03ab2b90(long param_1,undefined8 param_2,long param_3)

{
  undefined4 local_44;
  undefined *local_40;
  char *pcStack_38;
  
  if (((((*(byte *)(param_3 + 0x3c8) >> 2 & 1) != 0) && ((*(ushort *)(param_1 + 0x43c) & 1) != 0))
      && (*(char *)(*(long *)(param_1 + 8) + 0x510) != '\0')) &&
     ((((*(char *)(param_1 + 0x7c0) != '\0' || *(char *)(param_1 + 0x1098) != '\0' &&
        (*(float *)(param_1 + 0x12f8) <= *(float *)(param_1 + 0x1304))) &&
       ((*(float *)(param_1 + 0x12fc) <= *(float *)(param_1 + 0x1308) &&
        ((*(float *)(param_1 + 0x1300) <= *(float *)(param_1 + 0x130c) &&
         (0 < *(int *)(*(long *)(param_3 + 1000) + 0xbc))))))) &&
      ((*(uint *)(*(long *)(param_3 + 1000) + 0x9c) >> 4 & 1) != 0)))) {
    FUN_03ab54a0(param_1 + 0x7b8);
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "Model(StaticDepthShadow/ZOnly)";
    local_44 = 0x10;
    FUN_03a4f764(param_3,param_2,&local_40,2,&local_44,0,9,9,0x20,0xffff);
    FUN_03ab5e30(param_1 + 0x7b8,param_2);
  }
  if (((((*(ushort *)(param_1 + 0x43c) & 1) != 0) &&
       (*(char *)(*(long *)(param_1 + 8) + 0x510) != '\0')) &&
      (*(float *)(param_1 + 0x12f8) <= *(float *)(param_1 + 0x1304))) &&
     ((*(float *)(param_1 + 0x12fc) <= *(float *)(param_1 + 0x1308) &&
      (*(float *)(param_1 + 0x1300) <= *(float *)(param_1 + 0x130c))))) {
    *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(param_1 + 0x12e8);
  }
  return;
}

