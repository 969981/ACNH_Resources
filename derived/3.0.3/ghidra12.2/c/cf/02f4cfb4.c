
void FUN_02f4cfb4(long param_1,uint param_2,byte param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_60;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined4 local_40;
  undefined8 local_3c;
  byte local_34;
  
  if (param_2 < 2) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x220) + (ulong)param_2 * 8 + 0x570);
    if (lVar10 != 0) {
      puVar1 = (undefined4 *)(param_1 + 0x382a4);
      local_40 = 0;
      uVar3 = *(uint *)(param_1 + 0x382bc);
      uVar9 = (ulong)uVar3;
      local_3c = 0x60000000c;
      local_4c = 0;
      uVar2 = uVar9;
      if (2 < uVar3) {
        uVar2 = 0;
      }
      bVar7 = 2 < uVar3;
      local_58 = *(undefined4 *)(param_1 + 0x38150 + uVar2 * 4);
      local_60 = PTR_DAT_04bc9c78 + 0x10;
      uVar2 = uVar9;
      if (bVar7) {
        uVar2 = 0;
      }
      if (param_2 == 0) {
        local_40 = *(undefined4 *)(param_1 + 0x382d4);
        local_54 = puVar1[uVar2];
        puVar8 = puVar1 + uVar9;
        if (bVar7) {
          puVar8 = puVar1;
        }
        local_3c = 0x10000000c;
      }
      else {
        puVar8 = puVar1 + uVar9;
        if (bVar7) {
          puVar8 = puVar1;
        }
        local_54 = (puVar1 + uVar2)[9];
        if (1 < *(uint *)(lVar10 + 0x298)) {
          local_54 = puVar1[uVar2];
          iVar4 = *(int *)(lVar10 + 0x2e8);
          iVar5 = iVar4 * *(int *)(lVar10 + 0x430);
          uVar3 = iVar5 + *(int *)(lVar10 + 0x2f4);
          if (((int)local_54 < iVar5 || uVar3 == local_54) ||
              iVar5 <= (int)local_54 && (int)uVar3 < (int)local_54) {
            if (*(int *)(lVar10 + 0x444) + *(int *)(lVar10 + 0x440) * iVar4 <= (int)local_54) {
              iVar5 = 0;
              if (iVar4 != 0) {
                iVar5 = *(int *)(lVar10 + 0x2f4) / iVar4;
              }
              iVar6 = 0;
              if (iVar4 != 0) {
                iVar6 = (int)local_54 / iVar4;
              }
              local_54 = iVar4 + iVar4 * (iVar6 - iVar5);
              local_54 = local_54 & ((int)local_54 >> 0x1f ^ 0xffffffffU);
            }
          }
          else {
            local_54 = 0xffffffff;
          }
        }
      }
      local_50 = *puVar8;
      local_4a = (ulong)CONCAT14(param_3 & 1,0x1000001);
      local_34 = *(byte *)(param_1 + 0x1f8);
      if (7 < local_34) {
        local_34 = 0xff;
      }
      FUN_03864290(lVar10,&local_60);
      if ((((((*(uint *)(param_1 + 0x38160) != param_2) && (*(int *)(lVar10 + 0x2f8) != 0)) &&
            (*(int *)(lVar10 + 0x208) != 0)) &&
           ((*(long *)(lVar10 + 0x270) != 0 && (*(long *)(*(long *)(lVar10 + 0x270) + 8) != 0)))) &&
          ((*(long *)(lVar10 + 0x480) == 0 || (*(int *)(*(long *)(lVar10 + 0x480) + 0x14) != -1))))
         && ((((*(long *)(lVar10 + 0x2d8) != 0 && (0 < *(int *)(lVar10 + 0x3d8))) &&
              (*(int *)(lVar10 + 0x3d4) != 0)) && (*(uint *)(lVar10 + 0x298) < 2)))) {
        *(undefined4 *)(lVar10 + 0x2e4) = 1;
        FUN_03ebb160(lVar10 + 0x290,3);
      }
    }
  }
  return;
}

