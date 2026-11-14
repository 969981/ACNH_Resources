
void FUN_01c75194(undefined8 param_1,void *param_2)

{
  long *plVar1;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  if (param_2 != (void *)0x0) {
    if (*(char *)((long)param_2 + 0x608) != '\0') {
      *(undefined1 *)((long)param_2 + 0x608) = 0;
    }
    if (*(char *)((long)param_2 + 0x5a8) != '\0') {
      *(undefined1 *)((long)param_2 + 0x5a8) = 0;
    }
    if (*(long *)((long)param_2 + 0x570) != 0) {
      (**(code **)(*(long *)**(undefined8 **)((long)param_2 + 0x568) + 0x38))();
    }
    *(undefined8 *)((long)param_2 + 0x570) = 0;
    *(undefined4 *)((long)param_2 + 0x578) = 0;
    if (*(char *)((long)param_2 + 0x528) != '\0') {
      if (*(char *)((long)param_2 + 0x3c0) != '\0') {
        if (*(uint *)((long)param_2 + 0x3b8) != 0xffffffff) {
          (*(code *)(&PTR_FUN_04a434e0)[*(uint *)((long)param_2 + 0x3b8)])
                    (&uStack_3,(long)param_2 + 0x378);
        }
        *(undefined1 *)((long)param_2 + 0x3c0) = 0;
        *(undefined4 *)((long)param_2 + 0x3b8) = 0xffffffff;
      }
      if (*(char *)((long)param_2 + 0x3cc) != '\0') {
        *(undefined1 *)((long)param_2 + 0x3cc) = 0;
      }
      if (*(char *)((long)param_2 + 0x500) != '\0') {
        *(undefined1 *)((long)param_2 + 0x500) = 0;
      }
      if (*(char *)((long)param_2 + 0x514) != '\0') {
        *(undefined1 *)((long)param_2 + 0x514) = 0;
      }
      if (*(char *)((long)param_2 + 0x50c) != '\0') {
        *(undefined1 *)((long)param_2 + 0x50c) = 0;
      }
      *(undefined1 *)((long)param_2 + 0x528) = 0;
    }
    if (*(char *)((long)param_2 + 0x370) != '\0') {
      if (*(char *)((long)param_2 + 0x208) != '\0') {
        if (*(uint *)((long)param_2 + 0x200) != 0xffffffff) {
          (*(code *)(&PTR_FUN_04a434e0)[*(uint *)((long)param_2 + 0x200)])
                    (&uStack_2,(long)param_2 + 0x1c0);
        }
        *(undefined1 *)((long)param_2 + 0x208) = 0;
        *(undefined4 *)((long)param_2 + 0x200) = 0xffffffff;
      }
      if (*(char *)((long)param_2 + 0x214) != '\0') {
        *(undefined1 *)((long)param_2 + 0x214) = 0;
      }
      if (*(char *)((long)param_2 + 0x348) != '\0') {
        *(undefined1 *)((long)param_2 + 0x348) = 0;
      }
      if (*(char *)((long)param_2 + 0x35c) != '\0') {
        *(undefined1 *)((long)param_2 + 0x35c) = 0;
      }
      if (*(char *)((long)param_2 + 0x354) != '\0') {
        *(undefined1 *)((long)param_2 + 0x354) = 0;
      }
      *(undefined1 *)((long)param_2 + 0x370) = 0;
    }
    if (*(char *)((long)param_2 + 0x1b8) != '\0') {
      if (*(char *)((long)param_2 + 0x50) != '\0') {
        if (*(uint *)((long)param_2 + 0x48) != 0xffffffff) {
          (*(code *)(&PTR_FUN_04a434e0)[*(uint *)((long)param_2 + 0x48)])
                    (&uStack_1,(long)param_2 + 8);
        }
        *(undefined1 *)((long)param_2 + 0x50) = 0;
        *(undefined4 *)((long)param_2 + 0x48) = 0xffffffff;
      }
      if (*(char *)((long)param_2 + 0x5c) != '\0') {
        *(undefined1 *)((long)param_2 + 0x5c) = 0;
      }
      if (*(char *)((long)param_2 + 400) != '\0') {
        *(undefined1 *)((long)param_2 + 400) = 0;
      }
      if (*(char *)((long)param_2 + 0x1a4) != '\0') {
        *(undefined1 *)((long)param_2 + 0x1a4) = 0;
      }
      if (*(char *)((long)param_2 + 0x19c) != '\0') {
        *(undefined1 *)((long)param_2 + 0x19c) = 0;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(param_2);
      return;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_2);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01c7536c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      return;
    }
  }
  return;
}

