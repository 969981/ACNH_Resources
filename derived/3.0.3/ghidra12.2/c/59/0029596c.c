
void FUN_0029596c(undefined8 param_1,long *param_2,int param_3,int param_4,long param_5,uint param_6
                 ,long param_7)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_44;
  
  lVar2 = DAT_04c60f48;
  piVar1 = &local_70;
  if (((((param_3 == 0) || (10 < param_3)) || (param_5 == 0)) ||
      (((param_6 & 0xffff) == 0 || (*(uint *)(param_2 + 0x1c) < (param_6 & 0xffff))))) ||
     (param_7 == 0)) {
    local_60 = 0x10c07;
LAB_002959f4:
    local_70 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_70);
  }
  else {
    if (*(long *)(DAT_04c60f48 + 0xf0) == param_7) {
LAB_002959dc:
      local_60 = 0x10c08;
      goto LAB_002959f4;
    }
    if (1 < param_3 - 9U) {
      if ((*(int *)(DAT_04c60f48 + 0xd4) == 2) &&
         (uVar3 = (ulong)(*(char *)(DAT_04c60f48 + 0x162) == '\0'),
         *(int *)(DAT_04c60f48 + uVar3 * 4 + 0x180) == 0)) {
        (**(code **)(**(long **)(DAT_04c60f48 + uVar3 * 8 + 0x168) + 0x10))();
        lVar2 = DAT_04c60f48;
        *(undefined1 *)((long)param_2 + 0xfc) = 0;
        goto LAB_00295aa8;
      }
      goto LAB_002959dc;
    }
    if ((*(int *)(DAT_04c60f48 + 0xd4) != 4) ||
       (*(int *)(DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 4 + 0x180) == 0))
    goto LAB_002959dc;
    *(undefined1 *)((long)param_2 + 0xfc) = 1;
LAB_00295aa8:
    if (*(int *)(lVar2 + 0x110) == 1) goto LAB_002959dc;
    (**(code **)(*param_2 + 0x78))(&local_60,param_2,param_3,param_4,param_5,param_6,param_7);
    if (local_60 == 0) {
      *(undefined1 *)((long)param_2 + 0xf4) = 0;
      *(undefined1 *)((long)param_2 + 0xf6) = 0;
      lVar2 = 0;
      if (param_4 != 8 || param_3 != 9) {
        lVar2 = param_7;
      }
      *(int *)(param_2 + 0x12) = param_3;
      *(undefined2 *)((long)param_2 + 0xfa) = 0;
      local_70 = 0;
      param_2[0x14] = lVar2;
      local_44 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_44);
      FUN_00229780(param_2 + 0x20,&local_70);
      lVar2 = *(long *)(*(long *)PTR_DAT_04bcb8c0 + 0x30);
      *(undefined1 *)(param_2 + 0x26) = 0;
      param_2[0x24] = lVar2;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_70 = 0;
      local_44 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_44);
      goto LAB_00295a10;
    }
  }
  piVar1 = &local_60;
LAB_00295a10:
  FUN_002296c4(param_1,piVar1);
  return;
}

