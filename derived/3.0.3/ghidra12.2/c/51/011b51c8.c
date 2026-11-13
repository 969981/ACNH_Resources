
void FUN_011b51c8(long param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_40;
  byte local_3c;
  undefined1 local_3b;
  long local_38;
  
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
LAB_011b5200:
    local_70 = PTR_DAT_04bbb9a8 + 0x10;
    lVar8 = *(long *)PTR_DAT_04bb5c90;
    uVar3 = (uint)*(ushort *)(param_1 + 0x284) - (uint)*(ushort *)(lVar8 + 0x698);
    if (uVar3 < *(uint *)(lVar8 + 0x678)) {
      local_68 = *(undefined8 *)(*(long *)(lVar8 + 0x680) + (long)(int)uVar3 * 8);
    }
    else {
      local_68 = 0;
    }
    pcVar4 = (char *)FUN_011a64b0(&local_70);
    if (*pcVar4 != '\0') {
      pcVar5 = (char *)FUN_011a6670(&local_70);
      local_3c = param_2[1];
      pcStack_48 = "Root";
      if (*pcVar5 != '\0') {
        pcStack_48 = pcVar5;
      }
      if (*(long *)(*(long *)(param_1 + 0x48) + 0x98) == 0) {
        local_40 = 0;
      }
      else {
        local_40 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230);
      }
      if (7 < local_3c) {
        local_3c = 0xff;
      }
      local_38 = param_1 + 0x308;
      local_3b = 0;
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = pcVar4;
      local_50 = local_60;
      FUN_01184fd0(param_1 + 0x318,&local_60);
      uVar6 = FUN_01180280(*(undefined8 *)PTR_DAT_04bb3240,&local_60);
      if ((uVar6 & 1) != 0) {
        local_60._0_4_ = 1;
        goto LAB_011b52fc;
      }
    }
    uVar2 = *(ushort *)(*(long *)(param_1 + 0x48) + 0x284);
    if (uVar2 < 1000) {
      if ((*(int *)PTR_DAT_04bb6260 < (int)(short)uVar2) ||
         (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar2 & 0xffffffffU) * 0x10) == 0)) {
        uVar7 = 0xffffffffffffffff;
      }
      else {
        uVar7 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar2 * 0x10 + 8);
      }
      FUN_00a77b40(param_1 + 0x2b0,uVar7);
      return;
    }
  }
  else {
    if (cVar1 != '\r') {
      if (cVar1 != '\x05') {
        return;
      }
      goto LAB_011b5200;
    }
    local_60._0_4_ = 0;
LAB_011b52fc:
    *(undefined4 *)(param_1 + 0x300) = local_60._0_4_;
  }
  return;
}

