
void FUN_02845810(undefined4 *param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  
  uVar4 = *(undefined2 *)(param_2 + 0x34);
  uVar2 = *(undefined1 *)(param_2 + 0x36);
  *(undefined2 *)param_1 = uVar4;
  uVar3 = *(undefined1 *)(param_2 + 0x37);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)((long)param_1 + 2) = uVar2;
  *(undefined1 *)((long)param_1 + 3) = uVar3;
  param_1[1] = uVar1;
  iVar6 = FUN_0277d6c4(param_1);
  puVar5 = PTR_DAT_04bb43c0;
  if ((iVar6 == 0x1095) && ((param_3 & 1) != 0)) {
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_48 = 0;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    local_50 = uVar4;
    local_4e = uVar2;
    local_4d = uVar3;
    local_4c = uVar1;
    uVar7 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar5 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_1);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8), lVar8 != 0)) {
          local_48 = lVar8;
        }
      }
    }
    FUN_01b06c00(&local_60,&local_58);
    *param_1 = local_60;
    param_1[1] = uStack_5c;
  }
  return;
}

