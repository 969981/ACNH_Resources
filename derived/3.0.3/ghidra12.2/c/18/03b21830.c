
void FUN_03b21830(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  param_1[4] = param_3;
  uVar9 = 0;
  if (*(long *)(param_3 + 0x88) != 0) {
    uVar9 = (*(byte *)(*(long *)(param_3 + 0x88) + 0xe5) & 1) << 6;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffff7bf | uVar9;
  (**(code **)(*param_1 + 0x148))(param_1,param_2,param_3);
  iVar4 = *(int *)(param_1[9] + 8);
  if (iVar4 != 0) {
    lVar10 = *(long *)(param_1[9] + 0x10);
    uVar11 = 0;
    do {
      lVar12 = *(long *)(lVar10 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3));
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x57) = *(byte *)(lVar12 + 0x57) | 0x10;
      }
      uVar1 = uVar11 + 1;
      uVar11 = uVar1 & 0xffffffff;
    } while (iVar4 != (int)uVar1);
    iVar4 = *(int *)(param_1[9] + 8);
    if (iVar4 != 0) {
      lVar10 = *(long *)(param_1[9] + 0x10);
      uVar11 = 0;
      do {
        lVar12 = *(long *)(lVar10 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3));
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0x57) = *(byte *)(lVar12 + 0x57) & 0xdf;
        }
        uVar1 = uVar11 + 1;
        uVar11 = uVar1 & 0xffffffff;
      } while (iVar4 != (int)uVar1);
    }
  }
  pcVar5 = (char *)FUN_00364e30(param_2,"Disable");
  if (((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) ||
     ((pcVar5 = (char *)FUN_00364e30(param_2,"Invalid"), pcVar5 != (char *)0x0 && (*pcVar5 != '\0'))
     )) {
    lVar10 = FUN_03b185ec(param_3,pcVar5,1);
    param_1[10] = lVar10;
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x57) = *(byte *)(lVar10 + 0x57) & 0xdf;
    }
  }
  uVar6 = FUN_00364d70(param_2,&DAT_040b10ce);
  lVar10 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))(*(long **)(param_3 + 0x18),uVar6,1);
  param_1[0xb] = lVar10;
  pcVar5 = (char *)FUN_00364d70(param_2,"Cursor");
  if (((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) &&
     (lVar10 = FUN_0037e610(*(undefined8 *)(param_3 + 0x18),"BoxCursorOff"), lVar10 == 0)) {
    lVar10 = (**(code **)(**(long **)(param_3 + 0x18) + 0x60))(*(long **)(param_3 + 0x18),pcVar5,1);
    param_1[0xc] = lVar10;
    plVar7 = (long *)(**(code **)(**(long **)(param_3 + 0x88) + 0x48))
                               (*(long **)(param_3 + 0x88),*(undefined8 *)PTR_DAT_04bd0810);
    (**(code **)(*plVar7 + 0x20))(plVar7,param_1,*(undefined8 *)(param_3 + 0x88));
  }
  plVar7 = *(long **)(param_3 + 0x18);
  if (((*PTR_DAT_04bd1a20 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1a20), puVar3 = PTR_DAT_04bd1a28, iVar4 != 0)) {
    if (((*PTR_DAT_04bd1a30 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1a30), puVar2 = PTR_DAT_04bc8f30, iVar4 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)puVar3 = puVar2;
      __cxa_guard_release(PTR_DAT_04bd1a30);
    }
    *(undefined **)PTR_DAT_04bd1a18 = puVar3;
    __cxa_guard_release(PTR_DAT_04bd1a20);
  }
  if (plVar7 == (long *)0x0) {
LAB_03b21a7c:
    lVar10 = *(long *)(param_3 + 0x18) + 0xb0;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))();
    if (puVar8 != (undefined8 *)PTR_DAT_04bd1a18) {
      do {
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)PTR_DAT_04bd1a18 && puVar8 != (undefined8 *)0x0);
      if (puVar8 == (undefined8 *)0x0) goto LAB_03b21a7c;
    }
    lVar10 = *(long *)(param_3 + 0x30);
  }
  param_1[3] = lVar10;
  lVar10 = FUN_00364ec0(param_2,"RepeatOn");
  if ((lVar10 != 0) ||
     (lVar10 = FUN_0037e610(*(undefined8 *)(param_3 + 0x18),"RepeatOn"), lVar10 != 0)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x80;
  }
  lVar10 = FUN_00364ec0(param_2,"NoTrigTouchOn");
  if ((lVar10 != 0) ||
     (lVar10 = FUN_0037e610(*(undefined8 *)(param_3 + 0x18),"NoTrigTouchOn"), lVar10 != 0)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100;
  }
  lVar10 = FUN_00364ec0(param_2,"DownWithTouchOn");
  if ((lVar10 != 0) ||
     (lVar10 = FUN_0037e610(*(undefined8 *)(param_3 + 0x18),"DownWithTouchOn"), lVar10 != 0)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x200;
  }
  return;
}

