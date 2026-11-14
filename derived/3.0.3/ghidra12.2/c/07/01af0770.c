
int FUN_01af0770(long param_1,uint param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  undefined *local_48;
  char *pcStack_40;
  uint local_34;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if ((puVar6 != (uint *)0x0) && (uVar3 = *puVar6, uVar3 != 0 && puVar6 != (uint *)(ulong)uVar3)) {
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
    if ((*puVar7 != 0) && ((uVar3 = puVar7[1], uVar3 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0x59)) {
          return 0;
        }
      }
    }
  }
  uVar3 = FUN_01aed730(param_1);
  uVar9 = (ulong)uVar3;
  if ((param_2 & 1) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "RegulationType4";
    uVar5 = FUN_0273f0a0(&local_48);
    if (((uVar5 & 1) != 0) &&
       (uVar9 = (ulong)(uint)((int)(uVar3 * 0xc) / 10), param_3 != (undefined1 *)0x0)) {
      *param_3 = 1;
    }
  }
  iVar8 = (int)(uVar9 >> 2);
  if ((int)uVar9 < 1) {
    iVar8 = (int)uVar9;
  }
  local_48 = (undefined *)CONCAT44(local_48._4_4_,0x49);
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 != (uint *)0x0) {
    uVar3 = *puVar6;
    local_34 = 0;
    if ((uVar3 == 0) || (puVar6 == (uint *)(ulong)uVar3)) goto LAB_01af0928;
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
    local_34 = 0;
    if (*puVar7 == 0) goto LAB_01af0928;
    uVar3 = puVar7[1];
    if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
           (local_34 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
           local_34 < 0x52)) goto LAB_01af0928;
      }
    }
  }
  local_34 = 0;
LAB_01af0928:
  if (local_34 == 0x49) {
    iVar4 = FUN_01aeb510(param_1);
    iVar8 = iVar8 + iVar4 * 1000;
  }
  return iVar8;
}

