
void FUN_00268b50(int *param_1,long *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bcdaf0;
  if (DAT_04c61168 == 0) {
    local_50 = 0x10c08;
    goto LAB_00268bf8;
  }
  if ((long *)*param_2 == (long *)0x0) {
LAB_00268bec:
    local_50 = 0x10c07;
  }
  else {
    lVar7 = param_2[1];
    cVar2 = *PTR_DAT_04bcdaf0;
    if ((char)lVar7 == '\0') {
      if (cVar2 != '\0') goto LAB_00268bec;
    }
    else {
      bVar5 = (**(code **)(*(long *)*param_2 + 0x38))();
      if ((bVar5 & ((char)lVar7 != '\0' || cVar2 == '\0')) == 0) goto LAB_00268bec;
    }
    if (DAT_04c603c8 == 0) {
      uVar6 = FUN_0021f454();
      lVar7 = FUN_00285d60(0x378,uVar6,8);
      if (lVar7 == 0) {
        local_50 = 0x10c01;
        DAT_04c603d0 = 0;
      }
      else {
        lVar8 = 0;
        do {
          puVar1 = (undefined4 *)(lVar7 + lVar8);
          lVar8 = lVar8 + 6;
          *puVar1 = 0;
          *(undefined2 *)(puVar1 + 1) = 0;
          puVar4 = PTR_DAT_04bcdaf8;
        } while (lVar8 != 0x378);
        *(long *)PTR_DAT_04bcdaf8 = lVar7;
        FUN_00269308(lVar7,param_2);
        DAT_04c603c8 = lVar7;
        FUN_00268d18(param_1,lVar7,param_2,*puVar3);
        if (*param_1 != 0) {
          FUN_002694ac(DAT_04c603c8);
          lVar7 = *(long *)puVar4;
          DAT_04c603c8 = 0;
          if (lVar7 != 0) {
            FUN_00285e00(lVar7);
            FUN_00285dc0(lVar7);
          }
          *(undefined8 *)puVar4 = 0;
          return;
        }
        DAT_04c5fcf0 = (undefined1)param_2[1];
        local_50 = 0;
      }
    }
    else {
      local_50 = 0x10c0f;
    }
  }
LAB_00268bf8:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

