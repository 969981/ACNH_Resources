
void FUN_02f20cbc(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined *local_30;
  undefined4 local_28;
  
  plVar8 = *(long **)(param_1 + 0x68);
  if (plVar8 == (long *)0x0) {
    return;
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x58) - (uint)*(ushort *)(DAT_05635578 + 0xff0);
  if (uVar4 < *(uint *)(DAT_05635578 + 0xfd0)) {
    puVar5 = *(uint **)(*(long *)(DAT_05635578 + 0xfd8) + (long)(int)uVar4 * 8);
    uVar4 = 0;
    if (puVar5 != (uint *)0x0) {
      uVar4 = *puVar5;
      if (uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4) {
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
        if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) && ((ulong)(ushort)puVar7[2] != 0))
        {
          lVar1 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05604488) &&
               (uVar3 = *(ushort *)(DAT_05604490 + (long)(int)uVar2 * 2), uVar4 = (uint)uVar3,
               uVar3 < 6)) goto LAB_02f20d90;
          }
        }
      }
      goto LAB_02f20d8c;
    }
  }
  else {
LAB_02f20d8c:
    uVar4 = 0;
  }
LAB_02f20d90:
  if ((*(uint *)(param_1 + 0x5c) & 0x7fffffff) == 0) {
    uVar9 = 0;
    if (4 < uVar4 - 1) goto LAB_02f20de0;
    puVar6 = (undefined4 *)(&DAT_04181370 + (long)(int)(uVar4 - 1) * 4);
  }
  else {
    uVar9 = 0;
    if (5 < uVar4) goto LAB_02f20de0;
    puVar6 = (undefined4 *)(&DAT_04181384 + (long)(int)uVar4 * 4);
  }
  uVar9 = *puVar6;
LAB_02f20de0:
  local_30 = PTR_DAT_04bc4f00 + 0x10;
  local_28 = 0x14;
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_30);
  (**(code **)(plVar8[3] + 0x158))(uVar9,plVar8[1]);
  return;
}

