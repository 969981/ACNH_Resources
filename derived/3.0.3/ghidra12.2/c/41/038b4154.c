
uint FUN_038b4154(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  undefined *local_80;
  long local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puVar1 = PTR_DAT_04bb60d8 + 0x10;
  local_48 = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_78 = 0;
  if (((char)param_1[0xf] != '\0') &&
     (local_80 = puVar1, uVar5 = (**(code **)(*param_1 + 0x20))(param_1), (uVar5 & 1) != 0)) {
    local_48 = 0;
    local_78 = (**(code **)(*param_1 + 0x68))(param_1,&local_80,param_2,1);
    if (local_78 != 0) {
      iVar2 = *(int *)(param_2 + 0x18);
      local_70 = param_1;
      if (iVar2 == 0) {
        uVar4 = 1;
LAB_038b42b4:
        cVar6 = (char)param_1[0xf];
      }
      else {
        lVar8 = *(long *)(param_2 + 0x10);
        uVar4 = 0;
        cVar6 = (char)param_1[0xf];
        if ((lVar8 != 0) && (cVar6 != '\0')) {
          uVar5 = (**(code **)(*param_1 + 0x48))(param_1,&local_80);
          if ((uVar5 & 1) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*param_1 + 0x98))(param_1,param_2 + 0x1c,&local_80,lVar8,iVar2);
          }
          goto LAB_038b42b4;
        }
      }
      uVar7 = 0;
      if (cVar6 != '\0') {
        uVar5 = (**(code **)(*param_1 + 0x48))(param_1,&local_80);
        if (((uVar5 & 1) == 0) ||
           (uVar5 = (**(code **)(*param_1 + 0x70))(param_1,&local_80), (uVar5 & 1) == 0)) {
          uVar7 = 0;
        }
        else {
          local_78 = 0;
          local_70 = (long *)0x0;
          uVar7 = 1;
        }
      }
      uVar4 = uVar4 & uVar7;
      goto LAB_038b4244;
    }
  }
  uVar4 = 0;
LAB_038b4244:
  plVar3 = local_70;
  if (((local_70 != (long *)0x0) && ((char)local_70[0xf] != '\0')) &&
     (local_80 = puVar1, uVar5 = (**(code **)(*local_70 + 0x48))(local_70,&local_80),
     (uVar5 & 1) != 0)) {
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_80);
  }
  return uVar4;
}

