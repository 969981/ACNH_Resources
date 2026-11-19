
undefined8 * FUN_038c633c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_3 == (long *)0x0) {
    lVar4 = *(long *)PTR_DAT_04bb2698;
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar4 + 8);
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 0xa8);
    }
    param_3 = (long *)*puVar3;
    if (param_3 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  if (param_1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x80))(param_3,8);
  }
  else {
    uVar2 = param_1 + 7;
  }
  if (uVar2 >> 5 < 0x289) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,uVar2 & 0xfffffffffffffff8,8);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FUN_038ca450(puVar3,param_2,param_3,puVar3,uVar2 & 0xfffffffffffffff8,1,0);
  *puVar3 = &PTR_FUN_04b64340;
  nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)(puVar3 + 0x1b));
  nn::mem::StandardAllocator::Initialize
            ((StandardAllocator *)(puVar3 + 0x1b),(ulong)(puVar3 + 0x24));
  (**(code **)(*param_3 + 0xd0))(param_3,puVar3);
  return puVar3;
}

