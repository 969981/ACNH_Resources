
/* WARNING: Removing unreachable block (ram,0x035aa040) */

undefined8 FUN_035aa010(int param_1,int param_2,long *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  short *psVar9;
  undefined4 local_48 [2];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = DAT_05150358;
  local_48[0] = 0;
  lVar8 = *(long *)(*param_3 + 0xd0);
  if (lVar8 != 0) {
    lVar1 = lVar8 + 0x130 + (ulong)*(uint *)(lVar8 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar8 + 0x198)) {
      lVar1 = lVar8 + 0x130;
    }
    iVar6 = *(int *)(lVar1 + 0x28);
    if (iVar6 <= param_1 && param_1 <= *(int *)(lVar1 + 8) + iVar6 + -1) {
      iVar2 = *(int *)(lVar1 + 0xc);
      iVar3 = *(int *)(lVar1 + 0x2c);
      if (iVar3 <= param_2 && param_2 <= iVar2 + iVar3 + -1) {
        uVar5 = (param_2 - iVar3) + (param_1 - iVar6) * iVar2;
        if (uVar5 < *(uint *)(lVar1 + 0x10)) {
          lVar8 = *(long *)(lVar1 + 0x18);
          psVar9 = (short *)(lVar8 + (long)(int)uVar5 * 8);
          if (*psVar9 != -3) goto LAB_035aa0fc;
          uVar5 = *(uint *)(lVar8 + (long)(int)uVar5 * 8 + 4);
          uVar5 = (param_2 - (iVar3 + (uVar5 >> 0x18))) +
                  (param_1 - (iVar6 + (uVar5 >> 0x10 & 0xff))) * iVar2;
          if (uVar5 < *(uint *)(lVar1 + 0x10)) {
            psVar9 = (short *)(lVar8 + (long)(int)uVar5 * 8);
            goto LAB_035aa0fc;
          }
        }
      }
    }
  }
  psVar9 = &DAT_05586008;
LAB_035aa0fc:
  if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
     (((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))))) {
    uVar5 = FUN_0277d6c4(psVar9);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0124c030(local_48,psVar9);
      iVar6 = FUN_0123db50(auStack_40,local_38);
      if ((iVar6 == 0x2e) ||
         (((((param_4 & 1) == 0 && (local_38 != 0)) &&
           (pbVar7 = (byte *)FUN_01246470(local_38,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98),
           pbVar7 != (byte *)0x0)) && ((*pbVar7 >> 1 & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}

