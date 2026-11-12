
uint FUN_008af370(float param_1,float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  float local_30;
  float fStack_2c;
  float local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = 0.0;
  piVar6 = *(int **)PTR_DAT_04bb59b8;
  if (piVar6 == (int *)0x0) goto LAB_008af39c;
  if (*piVar6 - 1U < 5) {
    local_28 = 10.0;
    goto LAB_008af39c;
  }
  if (*piVar6 != 6) goto LAB_008af39c;
  uVar4 = 0;
  uVar3 = (uint)*(ushort *)(piVar6 + 0x139);
  if (piVar6[0x133] != 0x1a) {
    uVar3 = 0;
  }
  uVar3 = uVar3 - *(ushort *)(DAT_05635578 + 0xff0);
  if (uVar3 < *(uint *)(DAT_05635578 + 0xfd0)) {
    puVar5 = *(uint **)(*(long *)(DAT_05635578 + 0xfd8) + (long)(int)uVar3 * 8);
    uVar4 = 0;
    if (puVar5 != (uint *)0x0) {
      uVar3 = *puVar5;
      if (uVar3 != 0 && puVar5 != (uint *)(ulong)uVar3) {
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        if (((*puVar7 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) && ((ulong)(ushort)puVar7[2] != 0))
        {
          lVar1 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05604488) &&
               (uVar4 = *(ushort *)(DAT_05604490 + (long)(int)uVar2 * 2), uVar4 < 6))
            goto LAB_008af4b4;
          }
        }
      }
      uVar4 = 0;
    }
  }
LAB_008af4b4:
  if (((piVar6[0x138] | 2U) == 3) && (local_28 = 20.0, uVar4 != 2)) {
    local_28 = 10.0;
  }
LAB_008af39c:
  local_30 = param_1 + 0.0;
  fStack_2c = param_2 + 0.0;
  local_28 = param_3 + local_28;
  local_24 = 1;
  local_20 = 1;
  uStack_18 = 0;
  uVar3 = FUN_008cf370(param_4,&local_30);
  return uVar3 & 1;
}

