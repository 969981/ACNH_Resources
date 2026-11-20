
uint FUN_04000a28(long param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_34;
  
  local_34 = 0x564d5332;
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
    if (*(long *)(param_1 + 0x30) == 0) {
LAB_04000b68:
      local_68 = 0;
      local_60 = 0;
      pcVar5 = *(code **)(*param_2 + 0x20);
      local_78 = 0;
      local_70 = 0;
      local_80 = 0;
      puVar4 = &local_80;
    }
    else {
LAB_04000ad8:
      puVar4 = (undefined8 *)(param_1 + 0x48);
      if (((*(byte *)(param_1 + 0x38) & 1) != 0) &&
         (puVar4 = (undefined8 *)*puVar4, puVar4 == (undefined8 *)0x0)) goto LAB_04000b68;
      pcVar5 = *(code **)(*param_2 + 0x20);
    }
    (*pcVar5)(param_2,puVar4,0x28);
  }
  else {
    if ((int)param_2[1] == 1) {
      uVar1 = 0x32534d56;
      if ((int)param_2[2] != 0xff00) {
        uVar1 = 0x564d5332;
      }
      local_80 = CONCAT44(local_80._4_4_,uVar1);
      (**(code **)(*param_2 + 0x38))(param_2,&local_80);
      if (*(long *)(param_1 + 0x30) != 0) goto LAB_04000ad8;
      goto LAB_04000b68;
    }
    local_80 = (ulong)local_80._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_80,4);
    uVar2 = ((uint)local_80 & 0xff00ff00) >> 8 | ((uint)local_80 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = (uint)local_80;
    }
    if (uVar2 != 0x564d5353) {
      uVar3 = 0;
      if (uVar2 != 0x564d5332) goto LAB_04000ba4;
      if (*(long *)(param_1 + 0x30) == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)(param_1 + 0x48);
        if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
          plVar6 = *(long **)(param_1 + 0x48);
        }
      }
      (**(code **)(*param_2 + 0x20))(param_2,&local_80,0x28);
      if ((plVar6 != (long *)0x0) &&
         ((((local_80 != *plVar6 || local_78 != plVar6[1]) || local_70 != plVar6[2]) ||
          local_68 != plVar6[3]) || local_60 != plVar6[4])) {
        uVar3 = 0;
        goto LAB_04000ba4;
      }
    }
  }
  uVar3 = FUN_04001f50(param_2,param_3,param_4,param_5,param_6);
LAB_04000ba4:
  return uVar3 & 1;
}

