
void FUN_0026ecd0(long param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  
  FUN_002aaa08();
  plVar4 = (long *)FUN_002ba790(DAT_04c61168);
  lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,*(undefined8 *)(param_2 + 2));
  if (lVar5 == 0) {
    plVar4 = (long *)FUN_002ba790(DAT_04c61168);
    local_48 = 0;
    local_50 = 0x800000000000;
    (**(code **)(*plVar4 + 0x90))(plVar4,&local_50);
  }
  else if (((*(byte *)(lVar5 + 0x38) < 0x20) && (*(long *)(lVar5 + 0x40) != 0)) &&
          (lVar6 = FUN_002aaa28(param_1), lVar6 != 0)) {
    cVar1 = FUN_002aaa44(param_1);
    if (cVar1 != -3) {
      bVar2 = FUN_002aaa44(param_1);
      if (bVar2 < 0x20) {
        lVar6 = FUN_002aaa28(param_1);
        if ((lVar6 != *(long *)(lVar5 + 0x40)) &&
           (cVar1 = FUN_002aaa44(param_1), *(char *)(lVar5 + 0x38) != cVar1)) {
          uVar3 = FUN_0026bfe0(DAT_04c603c8);
          plVar4 = (long *)FUN_002ba790(DAT_04c61168);
          lVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar3);
          bVar2 = *(byte *)(lVar5 + 0x38);
          if ((uint)bVar2 < (uint)(byte)((char)*(undefined2 *)(param_1 + 0x8a) + 1)) {
            plVar4 = (long *)(*(long *)(param_1 + 0x90) +
                             (long)(int)((uint)bVar2 - (uint)((uVar3 & 0xff) <= (uint)bVar2)) *
                             0x6b0);
            if (*param_2 == 1) {
              FUN_002ae560(&local_50,plVar4,*(undefined8 *)(lVar5 + 0x40));
              (**(code **)(*plVar4 + 0x20))(plVar4);
              return;
            }
            if (*param_2 == 0) {
              uVar9 = *(undefined8 *)(lVar6 + 0x40);
              uVar7 = FUN_002aaa54(param_1);
              uVar8 = FUN_002aaa64(param_1);
              (**(code **)(*plVar4 + 0x18))(&local_50,plVar4,uVar7,uVar8,uVar9,uVar3);
              FUN_002ae400(auStack_60,plVar4,*(undefined8 *)(lVar5 + 0x40),
                           *(undefined1 *)(lVar5 + 0x38));
              return;
            }
          }
        }
      }
    }
  }
  return;
}

