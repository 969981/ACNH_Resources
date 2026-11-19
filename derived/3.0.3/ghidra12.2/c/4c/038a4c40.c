
void FUN_038a4c40(long param_1)

{
  ulong *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **local_50;
  ulong *puStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = (ulong *)(param_1 + 8);
    uVar5 = *puVar1;
    if (uVar5 != 0) {
      lVar3 = *(long *)(uVar5 + 8);
      while (lVar3 != 0) {
        *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) & 1 | uVar5;
        uVar5 = *(ulong *)(uVar5 + 8);
        lVar3 = *(long *)(uVar5 + 8);
      }
      do {
        while( true ) {
          if (*(long **)(uVar5 + 0x28) != (long *)0x0) {
            (**(code **)(**(long **)(uVar5 + 0x28) + 0x18))();
          }
          lVar3 = *(long *)(uVar5 + 0x10);
          if (lVar3 == 0) break;
          *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) & 1 | uVar5;
          uVar5 = *(ulong *)(uVar5 + 0x10);
          lVar3 = *(long *)(uVar5 + 8);
          while (lVar3 != 0) {
            *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) & 1 | uVar5;
            uVar5 = *(ulong *)(uVar5 + 8);
            lVar3 = *(long *)(uVar5 + 8);
          }
        }
        uVar4 = uVar5;
        do {
          uVar5 = *(ulong *)(uVar4 + 0x18) & 0xfffffffffffffffe;
          if (uVar5 == 0) {
            local_40 = &LAB_038a4f78;
            uStack_38 = 0;
            local_50 = &PTR_LAB_04b625d0;
            if (*puVar1 != 0) {
              puStack_48 = puVar1;
              FUN_038a4f90(*puVar1,&local_50);
            }
            goto LAB_038a4d3c;
          }
          bVar2 = *(ulong *)(uVar5 + 8) != uVar4;
          uVar4 = uVar5;
        } while (bVar2);
      } while( true );
    }
LAB_038a4d3c:
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

