
/* WARNING: Removing unreachable block (ram,0x037653f4) */

void FUN_037653b0(char *param_1)

{
  void *__s;
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_58;
  char *local_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 == 0) {
    return;
  }
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  if (((*(byte *)(lVar4 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar4 = (**(code **)(**(long **)(*(long *)(lVar4 + 0x10) + 0x188) + 0x30))();
  if (lVar4 == 0) {
    return;
  }
  if (*param_1 != '\0') {
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "UseKabetasuDone";
    FUN_02759370(&local_58,1);
  }
  lVar5 = *(long *)(lVar4 + 0x36620);
  if (lVar5 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar1 = 0;
      plVar2 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar1 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar1 = uVar1 & 0xffffffff;
      if (*(long *)(lVar4 + 0x36620) == 0) goto LAB_037654c0;
      plVar2 = *(long **)(*(long *)(lVar4 + 0x36620) + 0x20);
    }
    if (plVar2 != (long *)0x0) {
      local_58 = *(undefined **)(lVar4 + 0x36600);
      local_50 = *(char **)(lVar4 + 0x36608);
      uStack_48 = 0x89a8;
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_58);
    }
  }
LAB_037654c0:
  __s = (void *)(*(long *)(lVar4 + 0x36608) + *(long *)(lVar4 + 0x36600));
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
  if ((((uVar1 & 1) != 0) && (*(long *)(lVar4 + 0x36620) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x36620) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}

