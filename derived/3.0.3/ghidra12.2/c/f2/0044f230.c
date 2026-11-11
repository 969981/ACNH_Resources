
void FUN_0044f230(long param_1,ulong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  short *psVar4;
  undefined1 *puVar5;
  long lVar6;
  long local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = -0x8000000000000000;
  FUN_0044f360(param_1,&local_40);
  if (((((param_2 & 1) != 0) && ((*(byte *)(param_1 + 1) & 1) != 0)) &&
      (puVar2 = (undefined8 *)FUN_00426db0(param_1,0x100), puVar2 != (undefined8 *)0x0)) &&
     ((undefined *)*puVar2 == PTR_LAB_04bd5168)) {
    if (((*(long *)(param_1 + 8) == 0) ||
        (plVar3 = (long *)FUN_00426e90(*(long *)(param_1 + 8),0x100), plVar3 == (long *)0x0)) ||
       (*plVar3 == 0)) {
      puVar2 = (undefined8 *)FUN_00426e00(param_1,0x800000);
      if (((puVar2 != (undefined8 *)0x0) && (psVar4 = (short *)*puVar2, psVar4 != (short *)0x0)) &&
         ((long)*psVar4 != 0)) {
        puVar5 = &LAB_00457850;
        lVar6 = (long)*psVar4 << 3;
        do {
          psVar4 = psVar4 + 4;
          plVar3 = (long *)FUN_00426e90(*(undefined8 *)psVar4,0x100);
          if ((plVar3 != (long *)0x0) && (*plVar3 != 0)) goto LAB_0044f30c;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = &LAB_00457850;
    }
LAB_0044f30c:
    puVar2 = (undefined8 *)FUN_00426d40(param_1,0x100);
    *puVar2 = puVar5;
  }
  lVar6 = local_38;
  uVar1 = local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_40 != 0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_40,8,uVar1 & 0x3fffffff);
  }
  return;
}

