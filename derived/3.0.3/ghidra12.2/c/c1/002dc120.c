
void FUN_002dc120(undefined8 param_1,long param_2,int *param_3,undefined4 param_4,long *param_5,
                 ushort param_6,undefined4 param_7)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_54 = 0x10c07;
  }
  else {
    if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
      *(int **)(param_2 + 0x2c0) = param_3;
      *(undefined4 *)(*(long *)(param_2 + 200) + 0xc) = param_4;
      if (param_6 != 0) {
        uVar4 = (ulong)param_6;
        do {
          plVar5 = *(long **)(param_2 + 0x128);
          lVar6 = *param_5;
          plVar2 = (long *)FUN_00187df4(0x18);
          plVar2[1] = (long)plVar5;
          plVar2[2] = lVar6;
          uVar4 = uVar4 - 1;
          *plVar2 = 0;
          lVar6 = *plVar5;
          *plVar2 = lVar6;
          *(long **)(lVar6 + 8) = plVar2;
          *plVar5 = (long)plVar2;
          plVar5[2] = plVar5[2] + 1;
          param_5 = param_5 + 1;
        } while (uVar4 != 0);
      }
      if (((DAT_04c60f48 == 0) || (bVar1 = FUN_0029d9f8(), bVar1 < 2)) ||
         (uVar4 = FUN_0029d9e0(DAT_04c60f48), (uVar4 & 1) == 0)) {
        lVar6 = *(long *)(param_2 + 200);
        lVar3 = *(long *)(param_2 + 0x128);
        if (lVar6 + 0x10 != lVar3) {
          FUN_002e7620(lVar6 + 0x10,*(undefined8 *)(lVar3 + 8),lVar3);
          lVar6 = *(long *)(param_2 + 200);
        }
        *(undefined4 *)(lVar6 + 0x28) = param_7;
        uVar4 = FUN_0030fbd4(*(undefined8 *)(param_2 + 0x58),param_2 + 0x140,lVar6,
                             *(undefined8 *)(param_2 + 0xa8));
        if ((uVar4 & 1) == 0) {
          local_54 = 0xac5a;
          *(undefined8 *)(param_2 + 0x2c0) = 0;
        }
        else {
          FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
          *(undefined4 *)(param_2 + 0x558) = 0;
          *(undefined1 *)(param_2 + 0x555) = 1;
          *(undefined8 *)(param_2 + 0x560) = 0;
          (**(code **)(**(long **)(param_2 + 0xa0) + 0x40))();
          local_54 = 0;
        }
        goto LAB_002dc17c;
      }
    }
    local_54 = 0x10c08;
  }
LAB_002dc17c:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
  FUN_002296c4(param_1,&local_54);
  return;
}

