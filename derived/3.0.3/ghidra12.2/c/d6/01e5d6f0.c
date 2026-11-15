
undefined8 FUN_01e5d6f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined8 local_40;
  short local_38;
  undefined2 local_36;
  int local_34;
  
  local_38 = *(short *)(param_1 + 0x5f8);
  if (local_38 == -2) {
    return 0;
  }
  local_36 = *(undefined2 *)(param_1 + 0x5fa);
  local_34 = *(int *)(param_1 + 0x5fc);
  local_40 = 0xfffe;
  FUN_0277d4ac(&local_40);
  puVar1 = (undefined8 *)(param_1 + 0x600);
  if (*(undefined8 **)(param_1 + 0x5a8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x5a8);
  }
  local_40 = *puVar1;
  uVar8 = FUN_0277d7b4(&local_38,&local_40);
  if ((uVar8 & 1) == 0) {
LAB_01e5d7a4:
    if (*(int *)(param_1 + 0x378) != 0xe) {
      lVar12 = *(long *)(param_1 + 0x340);
      uVar11 = *(uint *)(*(long *)(lVar12 + 0x1480) +
                         ((ulong)*(uint *)(*(long *)(lVar12 + 0x1480) + 0x10) & 1) * 0x20 + 0x28);
      if (uVar11 != 0) {
        if (DAT_04c93e08 != 0) {
          lVar12 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8));
          if (((lVar12 == 0) || ((*(uint *)(lVar12 + 0x248) >> 1 & 1) != 0)) ||
             (*(uint *)(lVar12 + 0x230) != uVar11)) {
            lVar12 = 0;
          }
          if ((*(int *)(DAT_04c93e08 + 0x288) == 1) || (*(int *)(DAT_04c93e08 + 0x288) == -1)) {
            plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            lVar2 = DAT_04c93e08;
            iVar7 = (**(code **)(*plVar10 + 0x60))();
            if (iVar7 < 0x11) {
              uVar11 = 1;
            }
            else {
              if (4 < *(uint *)(lVar2 + 0x5e8)) goto LAB_01e5d874;
              uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar2 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_01e5d874:
            uVar11 = 0;
          }
          if (lVar12 != 0) {
            uVar11 = uVar11 ^ 1;
            if (*(int *)(lVar12 + 0x150) != 1) {
              uVar11 = 1;
            }
            if (((uVar11 == 0) && ((*(uint *)(lVar12 + 0x248) >> 4 & 1) != 0)) &&
               (lVar12 = *(long *)(lVar12 + 0x60), lVar12 != 0)) {
              *(uint *)(lVar12 + 0x11a0) = *(uint *)(lVar12 + 0x11a0) & 0xfffffffe;
            }
          }
        }
        lVar12 = *(long *)(param_1 + 0x340);
      }
      *(uint *)(lVar12 + 0x15f4) = *(uint *)(lVar12 + 0x15f4) | 0x1000;
      FUN_01e57c78(param_1,&local_40,0,0);
      *(uint *)(*(long *)(param_1 + 0x340) + 0x15f4) =
           *(uint *)(*(long *)(param_1 + 0x340) + 0x15f4) & 0xffffefff;
      uVar9 = 1;
      goto LAB_01e5d93c;
    }
  }
  else if ((local_36._1_1_ != local_40._3_1_) || (local_34 != local_40._4_4_)) goto LAB_01e5d7a4;
  uVar9 = 0;
LAB_01e5d93c:
  uVar5 = DAT_0558600b;
  uVar4 = DAT_0558600a;
  uVar3 = DAT_05586008;
  *(undefined2 *)(param_1 + 0x5f8) = DAT_05586008;
  uVar6 = DAT_0558600c;
  *(undefined1 *)(param_1 + 0x5fa) = uVar4;
  *(undefined1 *)(param_1 + 0x5fb) = uVar5;
  *(undefined4 *)(param_1 + 0x5fc) = uVar6;
  *(undefined2 *)(param_1 + 0x600) = uVar3;
  *(undefined1 *)(param_1 + 0x602) = uVar4;
  *(undefined1 *)(param_1 + 0x603) = uVar5;
  *(undefined4 *)(param_1 + 0x604) = uVar6;
  return uVar9;
}

