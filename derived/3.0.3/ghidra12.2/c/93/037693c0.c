
/* WARNING: Removing unreachable block (ram,0x03769404) */

void FUN_037693c0(void)

{
  void *__s;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (DAT_05574040 == 0) {
    return;
  }
  local_58 = CONCAT44(local_58._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar1 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x36620);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0x36620) == 0) goto LAB_037694a0;
      plVar3 = *(long **)(*(long *)(lVar1 + 0x36620) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_58 = *(long *)(lVar1 + 0x36600);
      local_50 = *(undefined8 *)(lVar1 + 0x36608);
      uStack_48 = 0x89a8;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
    }
  }
LAB_037694a0:
  __s = (void *)(*(long *)(lVar1 + 0x36608) + *(long *)(lVar1 + 0x36600));
  memset(__s,0,0x89a8);
  FUN_028f50f0((long)__s + 0xc);
  *(undefined8 *)((long)__s + 0x48e4) = 0;
  *(undefined4 *)((long)__s + 0x48b4) = 0xffffffff;
  *(undefined8 *)((long)__s + 0x48bc) = 0;
  *(undefined2 *)((long)__s + 0x48b8) = 0;
  *(undefined2 *)((long)__s + 0x48f4) = 0;
  *(undefined8 *)((long)__s + 0x48eb) = 0;
  *(undefined4 *)((long)__s + 0x48f6) = 0x101;
  *(undefined1 *)((long)__s + 0x48fa) = 0;
  *(undefined4 *)((long)__s + 0x48fc) = 0;
  *(undefined8 *)((long)__s + 0x48e4) = 0;
  *(undefined8 *)((long)__s + 0x48ea) = 0;
  *(undefined2 *)((long)__s + 0x4908) = 0xffff;
  *(undefined4 *)((long)__s + 0x490c) = 0;
  *(undefined8 *)((long)__s + 0x48c4) = 0;
  *(undefined8 *)((long)__s + 0x48cc) = 0;
  *(undefined8 *)((long)__s + 0x48d4) = 0;
  *(undefined8 *)((long)__s + 0x48dc) = 0;
  *(undefined8 *)((long)__s + 0x4900) = 0;
  *(undefined2 *)((long)__s + 0x4910) = 0;
  memset((void *)((long)__s + 0x4914),0,0x4014);
  FUN_028f8bb0((void *)((long)__s + 0x4914));
  FUN_028f8bb0((long)__s + 0x5e70);
  FUN_028f8bb0((long)__s + 0x73cc);
  *(undefined8 *)((long)__s + 0x8980) = 0;
  *(undefined8 *)((long)__s + 0x8930) = 0;
  *(undefined8 *)((long)__s + 0x8928) = 0xffffffffffffffff;
  *(undefined8 *)((long)__s + 0x8986) = 0;
  *(undefined4 *)((long)__s + 0x898e) = 0x101;
  *(undefined1 *)((long)__s + 0x8992) = 0;
  *(undefined2 *)((long)__s + 0x8994) = 0;
  *(undefined8 *)((long)__s + 0x8998) = 0x500000000;
  *(undefined4 *)((long)__s + 0x89a0) = 0;
  *(undefined8 *)((long)__s + 0x8938) = 0;
  *(undefined8 *)((long)__s + 0x8940) = 0;
  *(undefined8 *)((long)__s + 0x8948) = 0;
  *(undefined8 *)((long)__s + 0x8950) = 0;
  *(undefined8 *)((long)__s + 0x8958) = 0;
  *(undefined8 *)((long)__s + 0x8960) = 0;
  *(undefined8 *)((long)__s + 0x8968) = 0;
  *(undefined8 *)((long)__s + 0x8970) = 0;
  *(undefined8 *)((long)__s + 0x8978) = 0;
  *(undefined1 *)((long)__s + 0x89a4) = 0;
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x36620) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x36620) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

