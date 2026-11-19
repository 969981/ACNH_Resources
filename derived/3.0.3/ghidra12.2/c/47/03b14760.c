
long * FUN_03b14760(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_158 [35];
  
  lVar1 = FUN_0037e610(param_2,"MultiFilterFile");
  if (lVar1 == 0) {
    return (long *)0x0;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar3 = malloc(0x9a8);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_03b1480c;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x9a8,8);
  }
LAB_03b1480c:
  FUN_0399f4c0(plVar3);
  FUN_039a10a0(plVar3,param_1,param_1);
  *(undefined1 *)((long)plVar3 + 0x7fa) = 1;
  if (*(long *)(param_3 + 0x88) != 0) {
    lVar5 = *(long *)(*(long *)(param_3 + 0x88) + 0x20);
    FUN_006e9528(local_158,"%s.baglmf",lVar1 + (ulong)*(uint *)(lVar1 + 4));
    plVar4 = *(long **)(lVar5 + 0x410);
    if ((plVar4 != (long *)0x0) &&
       (lVar1 = (**(code **)(*plVar4 + 0x30))(plVar4,local_158,0), lVar1 != 0)) {
      FUN_03964240(local_158,lVar1);
      (**(code **)(*plVar3 + 0x50))(plVar3,local_158[0]);
    }
  }
  return plVar3;
}

