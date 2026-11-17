
long * FUN_02c0bfcc(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar2 = malloc(0x110);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar2 = (long *)0x0;
        goto LAB_02c0c048;
      }
    }
    plVar2 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x110,8);
  }
LAB_02c0c048:
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_0386a3a0(plVar2,uVar3);
  *plVar2 = (long)(PTR_DAT_04bc5678 + 0x10);
  return plVar2;
}

