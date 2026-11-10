
void FUN_00238e14(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_58;
  int local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_34;
  
  if (((*(char *)(param_3 + 0x62b) == '\0') && (*(char *)(param_3 + 0x1a) == '\0')) &&
     (uVar2 = FUN_0021fe7c(*(long *)(param_2 + 0x260) + 0x70,param_4), (uVar2 & 1) == 0)) {
    uVar2 = FUN_002200e4(param_4,param_2 + 0x20);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_002200e4(param_4,param_2 + 0x40);
      if ((uVar2 & 1) != 0) {
        lVar4 = 1;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x60);
      if ((uVar2 & 1) != 0) {
        lVar4 = 2;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x80);
      if ((uVar2 & 1) != 0) {
        lVar4 = 3;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0xa0);
      if ((uVar2 & 1) != 0) {
        lVar4 = 4;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0xc0);
      if ((uVar2 & 1) != 0) {
        lVar4 = 5;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0xe0);
      if ((uVar2 & 1) != 0) {
        lVar4 = 6;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x100);
      if ((uVar2 & 1) != 0) {
        lVar4 = 7;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x120);
      if ((uVar2 & 1) != 0) {
        lVar4 = 8;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x140);
      if ((uVar2 & 1) != 0) {
        lVar4 = 9;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x160);
      if ((uVar2 & 1) != 0) {
        lVar4 = 10;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x180);
      if ((uVar2 & 1) != 0) {
        lVar4 = 0xb;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x1a0);
      if ((uVar2 & 1) != 0) {
        lVar4 = 0xc;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x1c0);
      if ((uVar2 & 1) != 0) {
        lVar4 = 0xd;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x1e0);
      if ((uVar2 & 1) != 0) {
        lVar4 = 0xe;
        goto LAB_00238fd4;
      }
      uVar2 = FUN_002200e4(param_4,param_2 + 0x200);
      if ((uVar2 & 1) != 0) {
        lVar4 = 0xf;
        goto LAB_00238fd4;
      }
    }
    else {
      lVar4 = 0;
LAB_00238fd4:
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + lVar4 * 4 + 0x220);
      FUN_0022b448(param_3);
    }
    if (*(int *)(param_3 + 0x10) == 0) {
      local_3c = 0;
      local_44 = 0x80000000;
      FUN_0022bd98(param_3,&local_44,0);
      local_58._0_4_ = 0;
      local_44 = CONCAT44(local_44._4_4_,0x10c08);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_44 + 4),(Result *)&local_58);
      puVar3 = &local_44;
      goto LAB_00239078;
    }
  }
  iVar1 = *(int *)(param_3 + 0x5f8);
  local_48 = 0;
  FUN_00226ec4(&local_44,*(undefined8 *)(param_2 + 0x10),param_3 + 0x38,iVar1,param_4,&local_48);
  if ((int)local_44 == 0) {
    if ((local_48 != 0) && (local_48 == iVar1)) {
      if (*(long *)(param_2 + 0x260) != 0) {
        *(undefined1 *)(*(long *)(param_2 + 0x260) + 0x6b0) = 1;
      }
      goto LAB_0023904c;
    }
    local_58._0_4_ = 0x10c08;
  }
  else {
    if (*(char *)(param_2 + 8) != '\0') {
      puVar3 = &local_44;
      goto LAB_00239078;
    }
LAB_0023904c:
    local_58._0_4_ = 0;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_34);
  puVar3 = &local_58;
LAB_00239078:
  FUN_002296c4(param_1,puVar3);
  return;
}

