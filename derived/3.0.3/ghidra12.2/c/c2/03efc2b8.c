
void FUN_03efc2b8(long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x18);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_03efc33c;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
  }
LAB_03efc33c:
  puVar1 = PTR_DAT_04bdef88;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  lVar4 = FUN_03efc704(param_2,0x2000000,0x20,param_3);
  plVar3[1] = lVar4;
  *(long **)(param_1 + 8) = plVar3;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffe;
  return;
}

