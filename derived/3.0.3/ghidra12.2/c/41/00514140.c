
void FUN_00514140(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long local_40;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (((int)param_2 < *(int *)(lVar2 + 0x68)) &&
     (0 < *(int *)(*(long *)(*(long *)(lVar2 + 0x60) + (long)(int)param_2 * 8) + 0x58))) {
    local_40 = 0;
    local_38 = -0x8000000000000000;
    FUN_00515d10(lVar2,param_2,1,&local_40,0);
    puVar1 = PTR_DAT_048607b8;
    if ((int)local_38 < 1) {
      uVar3 = local_38._4_4_;
    }
    else {
      uVar3 = *(uint *)(param_3 + 1);
      lVar2 = 0;
      do {
        lVar4 = *(long *)(local_40 + lVar2 * 8);
        if (uVar3 == (*(uint *)((long)param_3 + 0xc) & 0x3fffffff)) {
          FUN_00426990(puVar1,param_3,4);
          uVar3 = *(uint *)(param_3 + 1);
        }
        lVar2 = lVar2 + 1;
        *(undefined4 *)(*param_3 + (long)(int)uVar3 * 4) = *(undefined4 *)(lVar4 + 0x48);
        uVar3 = uVar3 + 1;
        *(uint *)(param_3 + 1) = uVar3;
      } while (lVar2 < (int)local_38);
      uVar3 = local_38._4_4_;
    }
    if ((-1 < local_38) && (local_38 = (ulong)uVar3 << 0x20, local_40 != 0)) {
      FUN_00421f90(puVar1,local_40,8,uVar3 & 0x3fffffff);
    }
  }
  return;
}

