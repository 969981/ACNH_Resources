
void FUN_00708db0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  long local_60;
  char local_58;
  char local_56;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x11f0) == 0) {
    *(undefined4 *)(param_1 + 0x11f0) = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x234);
  }
  local_44 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230);
  FUN_0071cb58(&local_60,(undefined4 *)(param_1 + 0x11f0),&local_44,0);
  if ((((local_60 != 0) && (local_58 != '\0')) && (local_56 != '\0')) &&
     ((*(long *)(local_60 + 0x60) != 0 &&
      (lVar2 = *(long *)(*(long *)(local_60 + 0x60) + 0x1150), lVar2 != 0)))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x60);
    if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x1150), lVar1 != 0)) {
      plVar3 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
      if ((plVar3 != (long *)0x0) && (lVar4 = *(long *)(local_60 + 0x68), lVar4 != 0)) {
        uVar6 = *(undefined4 *)(lVar4 + 0x2a8);
        lVar5 = *(long *)(lVar4 + 0x2a0);
        (**(code **)(*plVar3 + 0x100))(plVar3,lVar4 + 0x278);
        (**(code **)(*plVar3 + 0x150))(plVar3,lVar4 + 0x2b0);
        plVar3[0x54] = lVar5;
        *(undefined4 *)(plVar3 + 0x55) = uVar6;
      }
      FUN_03854fa0(param_1 + 0x11f8,lVar2,lVar1,*(undefined1 *)(param_1 + 0x1658));
      return;
    }
  }
  return;
}

