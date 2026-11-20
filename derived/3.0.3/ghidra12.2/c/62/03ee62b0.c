
long * FUN_03ee62b0(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  undefined **local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_58 = &PTR_LAB_04ba7188;
  if ((param_3 != 0) && (iVar1 = *(int *)(param_3 + 0x30), 0 < iVar1)) {
    iVar7 = 0;
    uStack_50 = param_2;
    local_48 = param_3;
    do {
      lVar2 = FUN_03ef7da8(param_3,iVar7,param_4,&local_58);
      if (lVar2 != 0) {
        lVar3 = FUN_03ef9510(lVar2,param_4);
        if (lVar3 == 0) {
          FUN_03ef7f80(lVar2);
          return (long *)0x0;
        }
        *(undefined1 *)(lVar3 + 0x42) = 1;
        lVar2 = DAT_05ae7600;
        if (DAT_05ae7600 == 0) {
          plVar5 = malloc(0x60);
        }
        else {
          if (param_4 == (long *)0x0) {
            lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            param_4 = (long *)(lVar2 + 8);
            if (lVar4 != 0) {
              param_4 = (long *)(lVar4 + 0xa8);
            }
            param_4 = (long *)*param_4;
            if (param_4 == (long *)0x0) {
              plVar5 = (long *)0x0;
              goto LAB_03ee63b8;
            }
          }
          plVar5 = (long *)(**(code **)(*param_4 + 0x30))(param_4,0x60,8);
        }
LAB_03ee63b8:
        *(undefined4 *)(plVar5 + 4) = 0;
        *plVar5 = (long)&PTR_LAB_04ba6fd0;
        *(undefined4 *)(plVar5 + 3) = 1;
        plVar5[1] = 0;
        plVar5[2] = 0;
        plVar5[5] = 0;
        *(undefined4 *)(plVar5 + 6) = 0;
        plVar5[7] = 0;
        *(undefined4 *)(plVar5 + 8) = 0;
        plVar5[9] = 0;
        *(undefined4 *)(plVar5 + 10) = 0;
        plVar5[0xb] = 0;
        uVar6 = FUN_03ee6460(plVar5);
        if ((uVar6 & 1) == 0) {
          FUN_03ee6938(plVar5);
          (**(code **)(*plVar5 + 8))(plVar5);
          FUN_03ef9a2c(lVar3);
          return (long *)0x0;
        }
        *(uint *)(plVar5 + 3) = *(uint *)(plVar5 + 3) | 0x20;
        return plVar5;
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  return (long *)0x0;
}

