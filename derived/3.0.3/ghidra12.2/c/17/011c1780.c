
void FUN_011c1780(undefined8 param_1,undefined8 param_2,short *param_3,byte param_4)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 local_90;
  char *local_88;
  short *psStack_80;
  undefined1 local_78;
  byte local_77;
  undefined *local_70 [4];
  int local_4c;
  undefined1 auStack_48 [8];
  
  FUN_0252d8f0(auStack_48);
  lVar6 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar6 == 0) || (*(long *)(lVar6 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(lVar6 + 0xb0) + 8) == 0)) ||
      ((*(long *)(lVar6 + 0x488) == 0 || (*(long *)(*(long *)(lVar6 + 0x488) + 8) == 0)))) ||
     ((*(long *)(lVar6 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar6 + 0x2b0) + 8) == 0)))) {
LAB_011c1840:
    uVar2 = 0;
    uVar4 = 1;
  }
  else {
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_011c1840;
    uVar4 = FUN_0123db50(param_2,0);
    uVar2 = FUN_01240210(param_2);
  }
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_88 = "act_hit_tree";
  FUN_025ffac8(local_70,&local_90,param_1);
  local_78 = *param_3 != -2;
  puVar1 = PTR_DAT_04bc3228 + 0x10;
  local_90._0_5_ = CONCAT14(uVar2,uVar4);
  local_88 = auStack_48;
  psStack_80 = param_3;
  local_77 = param_4 & 1;
  local_70[0] = puVar1;
  FUN_0258a904(local_70,&local_90);
  local_70[0] = puVar1;
  iVar5 = FUN_02589ca4(local_70);
  if (iVar5 != -1) {
    iVar5 = (**(code **)(local_70[0] + 0x20))(local_70);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar5);
    if (iVar5 < 0xd) goto LAB_011c18f4;
  }
  if (local_4c == 0) {
    local_4c = 1;
  }
LAB_011c18f4:
  FUN_02601530(local_70);
  return;
}

