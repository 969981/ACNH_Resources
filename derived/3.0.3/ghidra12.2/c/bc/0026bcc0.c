
void FUN_0026bcc0(long param_1,uint param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bc1510;
  plVar2 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,param_2);
  local_50 = (ulong)local_50._4_4_ << 0x20;
  local_58 = 0x200000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_58);
  lVar3 = *(long *)puVar1;
  plVar4 = (long *)FUN_002ba790();
  lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined1 *)(param_1 + 0x9b));
  local_50 = plVar2[8];
  local_58 = local_58 & 0xffffffff00000000;
  uStack_48 = *(undefined8 *)(lVar5 + 0x40);
  FUN_002ab680(lVar3 + 0x10,&local_58);
  FUN_002ba5a4(*(undefined8 *)puVar1);
  if ((param_2 & 0xff) < 0x20) {
    if ((param_2 & 0xff) == 0) {
      uVar6 = 1;
    }
    else {
      if ((param_2 & 0xff) < 4) {
        uVar6 = 1;
      }
      else {
        uVar7 = 0;
        uVar6 = 1;
        do {
          uVar7 = uVar7 + 4;
          uVar6 = uVar6 << 4;
        } while ((param_2 & 0xfc) != (uVar7 & 0xffff));
      }
      if ((param_2 & 3) != 0) {
        uVar7 = 0;
        do {
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 << 1;
        } while ((param_2 & 3) != (uVar7 & 0xffff));
      }
    }
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | uVar6;
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x78) = *(uint *)(lVar3 + 0x78) | uVar6;
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_002ba324(&local_58,*(undefined8 *)puVar1,&local_38,param_2);
    (**(code **)(param_1 + 0x58))(0,local_38);
  }
  plVar2 = *(long **)(param_1 + 0x110);
  if (plVar2 != (long *)0x0) {
    local_58 = (ulong)CONCAT31((int3)(local_58 >> 0x28),(char)param_2) << 0x20;
    local_50 = (ulong)(*(char *)(param_1 + 0xd3) != '\0' && *(char *)(param_1 + 0xaf) != '\0');
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_58);
  }
  return;
}

