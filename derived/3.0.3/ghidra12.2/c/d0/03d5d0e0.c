
/* WARNING: Removing unreachable block (ram,0x03d5d198) */

void FUN_03d5d0e0(long param_1,uint param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long local_50;
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  
  local_50 = *(long *)(param_1 + 0x218);
  if (local_50 != 0) {
    uVar3 = *(uint *)(local_50 + 0x14b0);
    uVar1 = 1 << (ulong)(param_2 & 0x1f);
    if ((param_3 & 1) == 0) {
      if ((uVar3 & uVar1) != 0) {
        *(uint *)(local_50 + 0x14b0) = uVar3 & (uVar1 ^ 0xffffffff);
        lVar4 = *(long *)(local_50 + 0x18);
        if ((((lVar4 != 0) && (param_2 < *(uint *)(lVar4 + 0x18))) &&
            (lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + (long)(int)param_2 * 8), lVar4 != 0)) &&
           (*(long *)(lVar4 + 0x10) == local_50)) {
          local_34 = 1;
          *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(local_50 + 0x14a0);
          *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(local_50 + 0x14a4);
          uStack_44 = 0;
          local_40 = 0;
          local_48 = param_2;
          (*(code *)**(undefined8 **)(local_50 + 0x40))((undefined8 *)(local_50 + 0x40),1,&local_50)
          ;
          *(undefined8 *)(lVar4 + 0x10) = 0;
        }
      }
    }
    else {
      *(uint *)(local_50 + 0x14b0) = uVar3 | uVar1;
    }
  }
  if ((*(long *)(param_1 + 0x228) != 0) && (iVar2 = *(int *)(param_1 + 0x1fc), 0 < iVar2)) {
    uVar3 = 0;
    do {
      uVar1 = uVar3;
      if (*(uint *)(param_1 + 0x220) <= uVar3) {
        uVar1 = 0;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar1 * 8);
      if ((lVar4 != 0) && (*(uint *)(lVar4 + 0x20) == param_2)) {
        *(byte *)(lVar4 + 0x3a) = param_3 & 1;
        iVar2 = *(int *)(param_1 + 0x1fc);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  if ((*(long *)(param_1 + 0x238) != 0) && (iVar2 = *(int *)(param_1 + 0x200), 0 < iVar2)) {
    uVar3 = 0;
    do {
      uVar1 = uVar3;
      if (*(uint *)(param_1 + 0x230) <= uVar3) {
        uVar1 = 0;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x238) + (ulong)uVar1 * 8);
      if ((lVar4 != 0) && (*(uint *)(lVar4 + 0x10) == param_2)) {
        *(byte *)(lVar4 + 0xbc) = param_3 & 1;
        iVar2 = *(int *)(param_1 + 0x200);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  return;
}

