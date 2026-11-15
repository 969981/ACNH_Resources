
undefined8 FUN_01ee739c(long *param_1)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 local_140 [27];
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_c0;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (DAT_04c487d4 == -1) {
    return 0;
  }
  local_140[0] = 3;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if (((((*puVar1 >> 3 & 1) != 0) && ((*(byte *)((long)param_1 + 0xad5a) >> 1 & 1) == 0)) &&
      (uVar3 = (**(code **)(*(long *)param_1[1] + 0x180))(), (uVar3 & 1) != 0)) &&
     (((uVar3 = FUN_0212ef10(param_1 + 0x154a), (uVar3 & 1) == 0 &&
       ((*(byte *)((long)param_1 + 0xad5d) >> 6 & 1) == 0)) && ((int)param_1[0xef6] != 0x10)))) {
    lVar5 = param_1[0x1137];
    if (*(char *)(lVar5 + 0x170) != '\0') {
      fVar6 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
      if (((*(int *)(lVar5 + 0x58) != 4) &&
          (fVar7 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278),
          iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0),
          *(int *)(lVar5 + 0xb8) <= iVar2 && iVar2 <= *(int *)(lVar5 + 200))) &&
         ((iVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0),
          *(int *)(lVar5 + 0xbc) <= iVar2 && (iVar2 <= *(int *)(lVar5 + 0xcc))))) goto LAB_01ee7724;
    }
    if (*(char *)(lVar5 + 0x171) != '\0') {
      fVar6 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
      if ((((*(int *)(lVar5 + 0x58) != 4) &&
           (fVar7 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278),
           iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0),
           *(int *)(lVar5 + 0xe0) <= iVar2 && iVar2 <= *(int *)(lVar5 + 0xf0))) &&
          (iVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0),
          *(int *)(lVar5 + 0xe4) <= iVar2)) && (iVar2 <= *(int *)(lVar5 + 0xf4))) goto LAB_01ee7724;
    }
    if (*(char *)(lVar5 + 0x172) != '\0') {
      fVar6 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
      if (((*(int *)(lVar5 + 0x58) != 4) &&
          (fVar7 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278),
          iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0),
          *(int *)(lVar5 + 0x108) <= iVar2 && iVar2 <= *(int *)(lVar5 + 0x118))) &&
         ((iVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0),
          *(int *)(lVar5 + 0x10c) <= iVar2 && (iVar2 <= *(int *)(lVar5 + 0x11c)))))
      goto LAB_01ee7724;
    }
    if (*(char *)(lVar5 + 0x173) != '\0') {
      fVar6 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
      if (((*(int *)(lVar5 + 0x58) != 4) &&
          (fVar7 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278),
          iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0),
          *(int *)(lVar5 + 0x130) <= iVar2 && iVar2 <= *(int *)(lVar5 + 0x140))) &&
         ((iVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0),
          *(int *)(lVar5 + 0x134) <= iVar2 && (iVar2 <= *(int *)(lVar5 + 0x144)))))
      goto LAB_01ee7724;
    }
    if (*(char *)(lVar5 + 0x174) != '\0') {
      fVar6 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
      if ((((*(int *)(lVar5 + 0x58) != 4) &&
           (fVar7 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278),
           iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0),
           *(int *)(lVar5 + 0x158) <= iVar2 && iVar2 <= *(int *)(lVar5 + 0x168))) &&
          (iVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0),
          *(int *)(lVar5 + 0x15c) <= iVar2)) && (iVar2 <= *(int *)(lVar5 + 0x16c))) {
LAB_01ee7724:
        FUN_01e7b7bc(local_140);
        plVar4 = (long *)FUN_016debb0(param_1[1]);
        (**(code **)(*plVar4 + 0x370))(&local_18);
        local_d4 = local_18;
        uStack_d0 = uStack_14;
        local_c0 = 1;
        if ((int)param_1[0xef6] != 0x20) {
          (**(code **)(*param_1 + 0x38))(param_1,0x20,local_140,1);
        }
        return 1;
      }
    }
  }
  return 0;
}

