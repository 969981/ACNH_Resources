
long * FUN_017838fc(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = FUN_01783420();
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x1540);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    plVar3 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x1540,8);
  }
  FUN_01787800(plVar3,uVar1);
  *plVar3 = (long)(PTR_DAT_04bbe448 + 0x10);
  return plVar3;
}

