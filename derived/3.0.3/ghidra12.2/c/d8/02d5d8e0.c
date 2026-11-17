
void FUN_02d5d8e0(long param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined *local_48;
  int local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  int iStack_38;
  undefined2 uStack_34;
  undefined2 local_32;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2e;
  undefined4 local_28;
  undefined8 local_24;
  byte local_1c;
  int local_14;
  
  if ((*(long *)(param_1 + 0x1680) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570), lVar5 != 0)) {
    local_30 = 0;
    local_24 = 0x60000000c;
    uVar8 = *(uint *)(param_1 + 0x1578);
    local_32 = 1;
    local_2e = 1;
    local_14 = -1;
    local_48 = PTR_DAT_04bc9c78 + 0x10;
    local_28 = 0;
    local_3c = 0;
    uStack_3a = 0;
    iStack_38 = 0;
    uStack_34 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x1560))) {
      lVar7 = param_1 + 0x1550;
      uVar9 = uVar8 + 1 & 3;
      if (2 < uVar8) {
        uVar8 = uVar8 + 1 & 0xfffffffc;
        do {
          uVar8 = uVar8 - 4;
          lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
        } while (uVar8 != 0);
      }
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        lVar7 = *(long *)(lVar7 + 8);
      }
      local_14 = -1;
      if ((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0x1564), lVar7 != 0)) {
        local_14 = *(int *)(lVar7 + 0x270);
      }
    }
    piVar2 = (int *)(param_1 + 0x2414);
    if (local_14 != 0x53) {
      piVar2 = (int *)(param_1 + 0x2410);
    }
    local_40 = *piVar2;
    if (param_2 == -1) {
      if (0 < local_40) {
        iVar3 = *(int *)(lVar5 + 0x2e8);
        uVar8 = 0;
        if (iVar3 != 0) {
          uVar8 = *(int *)(lVar5 + 0x2f4) / iVar3;
        }
        iVar6 = param_3;
        if (uVar8 != 1) {
          fVar10 = (float)(int)uVar8 * 0.5;
          uVar9 = 0;
          if (fVar10 != (float)(int)fVar10) {
            uVar9 = (uint)(0.0 <= fVar10);
          }
          iVar4 = uVar9 + (int)fVar10;
          if ((uVar8 & 1) != 0) {
            iVar4 = uVar8 - (uVar9 + (int)fVar10);
          }
          iVar6 = 0;
          if (iVar3 != 0) {
            iVar6 = param_3 / iVar3;
          }
          iVar4 = iVar6 - iVar4;
          iVar1 = iVar4;
          if (local_40 <= iVar4 * iVar3) {
            iVar1 = iVar6;
          }
          iVar6 = 0;
          if (-1 < iVar4) {
            iVar6 = iVar1;
          }
          iVar6 = iVar6 * iVar3;
        }
        local_3c = (undefined2)iVar6;
        uStack_3a = (undefined2)((uint)iVar6 >> 0x10);
        iStack_38 = param_3;
      }
    }
    else {
      local_3c = (undefined2)param_2;
      uStack_3a = (undefined2)((uint)param_2 >> 0x10);
      iStack_38 = param_3;
    }
    local_1c = *(byte *)(param_1 + 0x1f8);
    local_2f = 1;
    if (7 < local_1c) {
      local_1c = 0xff;
    }
    FUN_03864290(lVar5,&local_48);
  }
  return;
}

