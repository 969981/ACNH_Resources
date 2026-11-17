
void FUN_02b2af80(undefined8 *param_1,uint param_2)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_04aa1c38;
  *(uint *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  if (param_2 == 0) {
    return;
  }
  if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
    if ((((*(long *)(DAT_05635578 + 0xd0) != 0) &&
         (puVar2 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8), puVar2 != (uint *)0x0)) &&
        ((*(uint *)(DAT_05635578 + 0xe8) <= param_2 ||
         (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)param_2) != '\0')))) &&
       (((param_2 < *puVar2 && (puVar2[1] != 0)) && ((ushort)puVar2[2] != 0)))) {
      iVar3 = 0xc;
      if (*(char *)((long)puVar2 + 10) != '\0') {
        iVar3 = 0x1c;
      }
      lVar1 = (ulong)(puVar2[1] * param_2 + (uint)(ushort)puVar2[2] * 8 + iVar3) + (long)puVar2;
      goto LAB_02b2b050;
    }
  }
  else if (param_2 < *(uint *)(DAT_05635578 + 0x1e0)) {
    if (*(uint *)(DAT_05635578 + 0x1d0) <= param_2) {
      param_2 = 0;
    }
    lVar1 = *(long *)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)param_2 * 8);
    goto LAB_02b2b050;
  }
  lVar1 = 0;
LAB_02b2b050:
  param_1[2] = lVar1;
  return;
}

