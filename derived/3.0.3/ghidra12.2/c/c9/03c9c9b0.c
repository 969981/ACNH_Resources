
long FUN_03c9c9b0(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *local_70;
  long local_68;
  
  lVar6 = *(long *)(param_3 + 0x28);
  if (lVar6 != param_3 + 0x20) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_68 = lVar6 + 0xa8;
      lVar5 = lVar6 + -8;
      local_70 = puVar1;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar7 = param_2[1];
      (**(code **)(local_70 + 0x18))(&local_70);
      if (lVar7 == local_68) {
        return lVar5;
      }
      uVar4 = 0;
      bVar3 = true;
      do {
        lVar7 = param_2[1] + 2 + uVar4;
        cVar2 = *(char *)(lVar7 + -2);
        if (cVar2 != *(char *)(local_68 + uVar4)) break;
        if (cVar2 == '\0') {
          if (bVar3) {
            return lVar5;
          }
          break;
        }
        cVar2 = *(char *)(lVar7 + -1);
        if (cVar2 != *(char *)(local_68 + uVar4 + 1)) break;
        if (cVar2 == '\0') {
          return lVar5;
        }
        cVar2 = *(char *)(param_2[1] + 2 + uVar4);
        if (cVar2 != *(char *)(local_68 + uVar4 + 2)) break;
        if (cVar2 == '\0') {
          return lVar5;
        }
        bVar3 = uVar4 < 0x7fffe;
        uVar4 = uVar4 + 3;
      } while (uVar4 != 0x80001);
      lVar7 = FUN_03c9a750(lVar5);
      if ((lVar7 == 0) && (lVar5 = FUN_03c9c9b0(param_1,param_2,lVar5), lVar5 != 0)) {
        return lVar5;
      }
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != param_3 + 0x20);
  }
  return 0;
}

