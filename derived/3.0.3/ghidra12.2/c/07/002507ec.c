
void FUN_002507ec(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  Result *pRVar4;
  undefined8 *puVar5;
  undefined8 local_128;
  undefined4 local_120 [8];
  int local_100 [4];
  undefined8 local_f0 [2];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [128];
  undefined4 local_34;
  
  FUN_002b3fa8(auStack_c0);
  FUN_0021f508(auStack_e0,*(long *)(param_2 + 0x18) + 0x2a8);
  uVar2 = FUN_0021fea0(auStack_e0);
  if ((uVar2 & 1) == 0) {
    local_f0[0]._0_4_ = 0;
    pRVar4 = (Result *)local_f0;
  }
  else {
    uVar1 = FUN_002ba5d8(DAT_04c61168);
    if (((*(char *)(param_2 + 8) != '\0') && (*(long *)(param_2 + 0x18) != 0)) &&
       (uVar2 = FUN_0025a244(), (uVar2 & 1) != 0)) {
      *(undefined4 *)(*(long *)(param_2 + 0x18) + 0x1700) = uVar1;
    }
    FUN_00250638(local_f0,param_2,auStack_e0,auStack_c0,uVar1);
    local_120[0] = 0;
    local_128 = (undefined *)0x10;
    FUN_002b493c(auStack_c0,&local_128);
    plVar3 = (long *)FUN_002ba788(DAT_04c61168);
    (**(code **)(*plVar3 + 0x58))(plVar3,auStack_c0);
    FUN_002509c4(local_100,param_2,auStack_c0);
    if (local_100[0] == 0) {
      plVar3 = (long *)FUN_002ba788(DAT_04c61168);
      (**(code **)(*plVar3 + 0x60))(plVar3,auStack_c0);
      plVar3 = (long *)FUN_002ba788(DAT_04c61168);
      FUN_002b4378(&local_128,auStack_c0);
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_128);
      local_128 = PTR_DAT_04bcba18 + 0x10;
      FUN_0021f584(local_120);
      if (DAT_04c603c8 != 0) {
        FUN_0026c20c(DAT_04c603c8,0);
      }
      FUN_002593c4(*(undefined8 *)(param_2 + 0x18),PTR_LAB_04bcd740,0);
      puVar5 = local_f0;
      goto LAB_00250904;
    }
    local_34 = 0;
    pRVar4 = (Result *)&local_34;
  }
  local_128 = (undefined *)CONCAT44(local_128._4_4_,0x10c08);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_128 + 4),pRVar4);
  puVar5 = &local_128;
LAB_00250904:
  FUN_002296c4(param_1,puVar5);
  FUN_0021f584(auStack_e0);
  FUN_002b4104(auStack_c0);
  return;
}

