
void FUN_0073b250(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x1150) + 0x30);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      plVar4 = (long *)**(long **)(*(long *)(*(long *)(param_1 + 0x1150) + 0x38) + uVar6 * 8);
      if (((plVar4 != (long *)0x0) && (lVar7 = plVar4[0xe], lVar7 != 0)) &&
         (uVar2 = (**(code **)(*plVar4 + 0xb8))(), 0 < (int)uVar2)) {
        lVar7 = *(long *)(lVar7 + 0x10);
        uVar5 = (ulong)uVar2;
        do {
          if ((*(byte *)(lVar7 + 2) & 1) != 0) {
            if (*(long *)(param_1 + 0x1150) == 0) {
              return;
            }
            uVar1 = *(uint *)(*(long *)(param_1 + 0x1150) + 0x30);
            if ((int)uVar1 < 1) {
              return;
            }
            uVar6 = 0;
            do {
              plVar4 = (long *)**(undefined8 **)
                                 (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) + uVar6 * 8);
              iVar3 = (**(code **)(*plVar4 + 0x1e0))(plVar4);
              if (0 < iVar3) {
                do {
                  local_50 = 0x3f80000000000000;
                  uStack_48 = 0x3f80000000000000;
                  FUN_039d4cd0(plVar4,0,&local_50);
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 != uVar1);
            if (*(long *)(param_1 + 0x1150) == 0) {
              return;
            }
            uVar1 = *(uint *)(*(long *)(param_1 + 0x1150) + 0x30);
            if ((int)uVar1 < 1) {
              return;
            }
            if (uVar1 == 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              do {
                lVar7 = uVar6 * 8;
                uVar6 = uVar6 + 2;
                *(undefined1 *)
                 (**(long **)(*(long *)(*(long *)(param_1 + 0x1150) + 0x38) + lVar7) + 0x160) = 1;
                *(undefined1 *)
                 (**(long **)(*(long *)(*(long *)(param_1 + 0x1150) + 0x38) + lVar7 + 8) + 0x160) =
                     1;
              } while (uVar6 != ((ulong)uVar1 & 0xfffffffe));
            }
            if ((uVar1 & 1) == 0) {
              return;
            }
            *(undefined1 *)
             (**(long **)(*(long *)(*(long *)(param_1 + 0x1150) + 0x38) + uVar6 * 8) + 0x160) = 1;
            return;
          }
          lVar7 = lVar7 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  return;
}

