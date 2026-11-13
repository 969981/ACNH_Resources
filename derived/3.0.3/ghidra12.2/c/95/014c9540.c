
uint FUN_014c9540(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined **local_60;
  undefined8 uStack_58;
  undefined **local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  byte local_3c;
  undefined1 local_3b;
  long local_38;
  
  local_3c = *(byte *)(param_1 + 0x5d0);
  puVar1 = &DAT_051ec968 + (ulong)param_2 * 4;
  local_40 = *(undefined4 *)(param_1 + 0x230);
  local_3b = 0;
  if (0x11 < param_2) {
    puVar1 = &DAT_051ec968;
  }
  if (7 < local_3c) {
    local_3c = 0xff;
  }
  uStack_58 = puVar1[1];
  uStack_48 = puVar1[3];
  local_50 = &PTR_LAB_048f9770;
  local_38 = param_1 + 0x288;
  local_60 = &PTR_LAB_048f9770;
  FUN_01184fd0(param_1 + 0x298,&local_60);
  uVar2 = FUN_01180280(*(undefined8 *)PTR_DAT_04bb3240,&local_60);
  if ((uVar2 & 1) != 0) {
    *(uint *)(param_1 + 0xa20) = param_2;
    switch((ulong)param_2) {
    case 0:
    case 5:
    case 6:
    case 9:
      local_60._0_4_ = 0xd;
      if (*(int *)(param_1 + 0x3c0) != 0xd) {
        FUN_03ebb160(param_1 + 0x3b8);
      }
      iVar3 = 1;
      break;
    case 1:
    case 2:
    case 7:
    case 8:
      local_60._0_4_ = 0xc;
      if (*(int *)(param_1 + 0x3c0) != 0xc) {
        FUN_03ebb160(param_1 + 0x3b8);
      }
      iVar3 = 0xd;
      break;
    case 3:
    case 4:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
      local_60._0_4_ = 0xd;
      if (*(int *)(param_1 + 0x3c0) != 0xd) {
        FUN_03ebb160(param_1 + 0x3b8);
      }
      iVar3 = 7;
      break;
    default:
      goto switchD_014c9600_default;
    }
    local_60 = (undefined **)CONCAT44(local_60._4_4_,iVar3);
    if (*(int *)(param_1 + 0x378) != iVar3) {
      FUN_03ebb160(param_1 + 0x370);
    }
  }
switchD_014c9600_default:
  return uVar2 & 1;
}

