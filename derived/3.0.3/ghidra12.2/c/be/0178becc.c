
void FUN_0178becc(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  ushort uVar8;
  uint *puVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_2 + 0x78);
  if (**(char **)(param_1 + 0x5e0) == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0074f690(uVar10,param_1 + 0x358);
  }
  lVar5 = FUN_0074f690(uVar10,PTR_DAT_04bbe390);
  if (lVar5 == 0) {
    return;
  }
  if (**(char **)(param_1 + 0x3f8) == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0074f690(uVar10,param_1 + 0x3f0);
  }
  if (**(char **)(param_1 + 0x498) == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_0074f690(uVar10,param_1 + 0x490);
  }
  FUN_0178c120(param_1,uVar4,uVar6,lVar5,uVar10);
  if (*(long *)(param_1 + 0x5c8) != 0) {
    FUN_039a9540(*(undefined8 *)(*(long *)(param_2 + 0x60) + 0x1150),*(long *)(param_1 + 0x5c8),
                 &DAT_0528c9a0);
  }
  lVar5 = *(long *)(param_2 + 0x60);
  if (*(char *)(param_1 + 0x298) == '\0' && *(char *)(param_1 + 0x488) == '\0') {
    FUN_01777098(param_1 + 0x530,lVar5);
  }
  else {
    if (*(long *)(param_1 + 0x598) != 0) {
      FUN_039a9540(*(undefined8 *)(lVar5 + 0x1150),*(long *)(param_1 + 0x598),PTR_DAT_04bbe398);
    }
    if (*(long *)(param_1 + 0x5a0) != 0) {
      FUN_039a9540(*(undefined8 *)(lVar5 + 0x1150),*(long *)(param_1 + 0x5a0),PTR_DAT_04bbe3a0);
    }
    if (*(long *)(param_1 + 0x5a8) != 0) {
      FUN_039a9540(*(undefined8 *)(lVar5 + 0x1150),*(long *)(param_1 + 0x5a8),PTR_DAT_04bbe3a8);
    }
  }
  if (*(char *)(param_1 + 0x6a0) != '\0') {
    bVar3 = false;
    goto LAB_0178c0f8;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x290) - (uint)*(ushort *)(DAT_05293a70 + 0x400);
  if ((uVar2 < *(uint *)(DAT_05293a70 + 0x3e0)) &&
     (puVar7 = *(uint **)(*(long *)(DAT_05293a70 + 1000) + (long)(int)uVar2 * 8),
     puVar7 != (uint *)0x0)) {
    uVar2 = *puVar7;
    uVar8 = 0;
    if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
      uVar8 = 0;
      if (*puVar9 != 0) {
        uVar2 = puVar9[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar5 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar9 + lVar5 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar5 != 0) {
            uVar1 = 0;
            if ((ulong)uVar2 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar2);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if (uVar1 < DAT_05293018) {
              uVar8 = *(ushort *)(DAT_05293020 + (long)(int)uVar1 * 2);
              if (uVar8 < 2) goto LAB_0178c0f0;
            }
          }
        }
        goto LAB_0178c0ec;
      }
    }
  }
  else {
LAB_0178c0ec:
    uVar8 = 0;
  }
LAB_0178c0f0:
  bVar3 = uVar8 == 1;
LAB_0178c0f8:
  FUN_01777240(*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x60),bVar3,param_1 + 0x530
              );
  return;
}

