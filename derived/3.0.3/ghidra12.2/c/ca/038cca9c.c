
undefined8 *
FUN_038cca9c(long param_1,undefined8 param_2,uint param_3,uint param_4,long *param_5,uint param_6)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    uVar3 = -param_4;
    if (-1 < (int)param_4) {
      uVar3 = param_4;
    }
    if ((int)uVar3 < 9) {
      uVar3 = 8;
    }
    if ((uVar3 & uVar3 - 1) == 0) {
      if (param_5 == (long *)0x0) {
        lVar4 = *(long *)PTR_DAT_04bb2698;
        lVar1 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar2 = (undefined8 *)(lVar4 + 8);
        if (lVar1 != 0) {
          puVar2 = (undefined8 *)(lVar1 + 0xa8);
        }
        param_5 = (long *)*puVar2;
        if (param_5 == (long *)0x0) {
          return (undefined8 *)0x0;
        }
      }
      if (param_1 == 0) {
        uVar5 = (**(code **)(*param_5 + 0x80))(param_5,uVar3);
      }
      else {
        uVar5 = param_1 + 7;
      }
      uVar5 = uVar5 & 0xfffffffffffffff8;
      if (((ulong)(uVar3 - 1) + (ulong)param_3 & (long)(int)-uVar3) + 0x100 <= uVar5) {
        puVar2 = (undefined8 *)(**(code **)(*param_5 + 0x30))(param_5,uVar5,8);
        if (puVar2 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        FUN_038ca450(puVar2,param_2,param_5,puVar2,uVar5,1,param_6 & 1);
        *(uint *)((long)puVar2 + 0xd4) = param_3;
        *puVar2 = &PTR_LAB_04b64840;
        puVar2[0x1f] = 0;
        puVar2[0x1b] = 0;
        puVar2[0x1c] = 0;
        puVar2[0x1d] = 0;
        puVar2[0x1e] = 0;
        FUN_038ccc00(puVar2,uVar3,0,param_5);
        return puVar2;
      }
    }
  }
  return (undefined8 *)0x0;
}

