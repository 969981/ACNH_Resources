
/* WARNING: Removing unreachable block (ram,0x026ef3fc) */
/* WARNING: Removing unreachable block (ram,0x026ef3c0) */
/* WARNING: Removing unreachable block (ram,0x026ef3c8) */
/* WARNING: Removing unreachable block (ram,0x026ef378) */
/* WARNING: Removing unreachable block (ram,0x026ef300) */
/* WARNING: Removing unreachable block (ram,0x026ef35c) */
/* WARNING: Removing unreachable block (ram,0x026ef350) */
/* WARNING: Removing unreachable block (ram,0x026ef358) */
/* WARNING: Removing unreachable block (ram,0x026ef3ac) */
/* WARNING: Removing unreachable block (ram,0x026ef3b4) */
/* WARNING: Removing unreachable block (ram,0x026ef3bc) */
/* WARNING: Removing unreachable block (ram,0x026ef3ec) */
/* WARNING: Removing unreachable block (ram,0x026ef46c) */
/* WARNING: Removing unreachable block (ram,0x026ef44c) */
/* WARNING: Removing unreachable block (ram,0x026ef314) */
/* WARNING: Removing unreachable block (ram,0x026ef388) */

void FUN_026ef2cc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 == 0) {
LAB_026ef498:
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((((*(byte *)(param_2 + 0x50e) ^ 0xff) & 6) == 0) && (*(long **)(lVar2 + 400) != (long *)0x0)
       ) {
      uVar1 = (**(code **)(**(long **)(lVar2 + 400) + 0x18))();
      uVar3 = 0xa2458;
    }
    else if ((((*(byte *)(param_2 + 0x50f) ^ 0xff) & 6) == 0) &&
            (*(long **)(lVar2 + 0x198) != (long *)0x0)) {
      uVar1 = (**(code **)(**(long **)(lVar2 + 0x198) + 0x18))();
      uVar3 = 0xc6788;
    }
    else {
      if ((((*(byte *)(param_2 + 0x510) ^ 0xff) & 6) != 0) ||
         (*(long **)(lVar2 + 0x1a0) == (long *)0x0)) goto LAB_026ef498;
      uVar1 = (**(code **)(**(long **)(lVar2 + 0x1a0) + 0x18))();
      uVar3 = 0x14c618;
    }
    *param_1 = uVar1;
    param_1[1] = uVar3;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}

