
/* WARNING: Removing unreachable block (ram,0x0207b260) */
/* WARNING: Removing unreachable block (ram,0x0207b270) */

void FUN_0207b244(long param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  
  lVar12 = *(long *)(DAT_0519d040 + 0x1f8);
  if (lVar12 == 0) {
    param_3 = 0;
    uVar9 = 0;
    uVar11 = 0x15;
    uVar10 = 0x19;
  }
  else {
    uVar9 = *(uint *)(lVar12 + 0x20);
    if ((int)param_2 < (int)uVar9) {
      uVar10 = uVar9 + 0x19;
    }
    else {
      iVar5 = *(int *)(lVar12 + 0x30);
      uVar10 = param_2 + 0x19;
      uVar9 = param_2;
      if (iVar5 < (int)(param_2 + 0x18)) {
        uVar10 = iVar5 + 1;
        uVar9 = iVar5 - 0x18;
      }
    }
    uVar4 = *(uint *)(lVar12 + 0x24);
    if ((int)param_3 < (int)uVar4) {
      uVar11 = uVar4 + 0x15;
      param_3 = uVar4;
    }
    else {
      iVar5 = *(int *)(lVar12 + 0x34);
      if (iVar5 < (int)(param_3 + 0x14)) {
        uVar11 = iVar5 + 1;
        param_3 = iVar5 - 0x14;
      }
      else {
        uVar11 = param_3 + 0x15;
      }
    }
  }
  puVar13 = *(ushort **)(param_1 + 0x10);
  uVar4 = uVar9 & 0xffff;
  uVar3 = (ushort)uVar9;
  puVar13[4] = (ushort)uVar10;
  uVar6 = *puVar13;
  uVar7 = puVar13[1];
  puVar13[2] = uVar3;
  uVar8 = (ushort)param_3;
  puVar13[3] = uVar8;
  puVar13[5] = (ushort)uVar11;
  uVar2 = uVar6;
  if ((uVar10 & 0xffff) <= (uint)uVar6) {
    uVar2 = (ushort)uVar10;
  }
  uVar1 = uVar3;
  if (uVar4 <= uVar6) {
    uVar1 = uVar2;
  }
  param_3 = param_3 & 0xffff;
  *puVar13 = uVar1;
  uVar2 = uVar7;
  if ((uVar11 & 0xffff) <= (uint)uVar7) {
    uVar2 = (ushort)uVar11;
  }
  uVar6 = uVar8;
  if (param_3 <= uVar7) {
    uVar6 = uVar2;
  }
  puVar13[1] = uVar6;
  puVar13 = *(ushort **)(param_1 + 0x10);
  if (puVar13[4] <= uVar4) {
    uVar3 = puVar13[4];
  }
  uVar2 = puVar13[2];
  if (puVar13[2] <= uVar4) {
    uVar2 = uVar3;
  }
  *puVar13 = uVar2;
  if (puVar13[5] <= param_3) {
    uVar8 = puVar13[5];
  }
  uVar3 = puVar13[3];
  if (puVar13[3] <= param_3) {
    uVar3 = uVar8;
  }
  puVar13[1] = uVar3;
  return;
}

