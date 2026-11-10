
void FUN_001c9198(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [28];
  undefined4 local_4c;
  undefined4 local_48 [6];
  
  local_48[0] = CONCAT31(local_48[0]._1_3_,1);
  FUN_0018aa90(param_1,local_48);
  param_2[0x90] = param_2[0x90] + 1;
  (**(code **)(*param_2 + 0x110))(param_2,2,1);
  if ((*(int *)(param_2[1] + 8) != 10) && ((*(int *)(param_2[1] + 8) != 1 || (DAT_04c58ee0 != 1))))
  {
    local_4c = 0x8005000d;
    FUN_0018aa70(local_48,&local_4c);
    FUN_0018ab44(param_1,local_48);
    lVar4 = param_2[0x15];
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 8);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      iVar2 = *(int *)(lVar4 + 0x50);
      (**(code **)(*plVar5 + 0x20))(plVar5);
      puVar1 = PTR_LAB_04bc0ee0;
      if (iVar2 < 0) {
        puVar1 = (undefined *)0x0;
      }
      if (puVar1 != (undefined *)0x0) {
        local_48[0] = 0x8005000d;
        FUN_0018aa70(auStack_68,local_48);
        uStack_70 = param_1[2];
        local_80 = *param_1;
        local_78 = param_1[1];
        lVar4 = param_2[0x15];
        plVar5 = (long *)(lVar4 + 8);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar4 = lVar4 + 0x50;
        local_48[0] = CONCAT31(local_48[0]._1_3_,1);
        uVar3 = FUN_0018aad8(lVar4,local_48);
        if ((uVar3 & 1) != 0) {
          FUN_0018ab44(lVar4,&local_80);
        }
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
  }
  return;
}

