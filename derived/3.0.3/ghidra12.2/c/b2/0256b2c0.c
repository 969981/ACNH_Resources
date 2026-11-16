
void FUN_0256b2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x60);
  if ((lVar6 != 0) && (lVar5 = *(long *)(lVar6 + 0x1150), lVar5 != 0)) {
    puVar2 = *(ulong **)(lVar6 + 0x1180);
    lVar3 = *(long *)(lVar6 + 0x1160);
    if (puVar2 == (ulong *)0x0 || lVar3 == 0) {
      uVar4 = 0xffffffffffff;
    }
    else {
      uVar4 = *puVar2;
    }
    if ((((((uint)(uVar4 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
        ((((uint)uVar4 ^ 0xffffffff) & 0xffff) != 0)) &&
       ((((uint)(uVar4 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
      plVar1 = (long *)**(undefined8 **)
                         (*(long *)(lVar5 + 0x38) +
                         (-(uVar4 >> 0xf & 1) & 0xfffffffffff80000 | (uVar4 & 0xffff) << 3));
      (**(code **)(*plVar1 + 0x158))
                (plVar1,(int)(short)(uVar4 >> 0x10),(int)(short)(uVar4 >> 0x20),param_2);
      puVar2 = *(ulong **)(lVar6 + 0x1180);
      lVar3 = *(long *)(lVar6 + 0x1160);
    }
    uVar4 = 0xffffffffffff;
    if ((puVar2 != (ulong *)0x0) && (lVar3 != 0)) {
      uVar4 = puVar2[1 < *(uint *)(lVar6 + 0x1178)];
    }
    if ((((((uint)(uVar4 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
        ((((uint)uVar4 ^ 0xffffffff) & 0xffff) != 0)) &&
       ((((uint)(uVar4 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
      plVar1 = (long *)**(undefined8 **)
                         (*(long *)(lVar5 + 0x38) +
                         (-(uVar4 >> 0xf & 1) & 0xfffffffffff80000 | (uVar4 & 0xffff) << 3));
                    /* WARNING: Could not recover jumptable at 0x0256b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x158))
                (plVar1,(int)(short)(uVar4 >> 0x10),(int)(short)(uVar4 >> 0x20),param_3);
      return;
    }
  }
  return;
}

