
void FUN_01391f64(long param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined7 local_60;
  undefined1 uStack_59;
  
  if ((*(long **)(param_1 + 0x28) != (long *)0x0) &&
     (lVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x28))(), lVar5 != 0)) {
    uVar7 = *(undefined8 *)(lVar5 + 10);
    uVar1 = *(undefined4 *)(lVar5 + 0x12);
    uVar2 = *(undefined1 *)(lVar5 + 8);
    uVar3 = *(undefined1 *)(lVar5 + 0x16);
    bVar9 = *(byte *)(lVar5 + 0x17);
    local_60 = (undefined7)*(undefined8 *)(lVar5 + 0x18);
    uVar8 = *(undefined8 *)(lVar5 + 0x1f);
    uStack_59 = (undefined1)uVar8;
    puVar10 = *(undefined8 **)(param_1 + 0x28);
    if (puVar10 != (undefined8 *)0x0) {
      if (((*PTR_DAT_04bbc658 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbc658), iVar4 != 0)) {
        *(undefined ***)PTR_DAT_04bbc650 = &PTR_LAB_04993c10;
        __cxa_guard_release(PTR_DAT_04bbc658);
      }
      uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bbc650);
      if ((uVar6 & 1) != 0) {
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        *(undefined1 *)(puVar10 + 3) = uVar2;
        *(undefined1 *)((long)puVar10 + 0x19) = param_2;
        *(undefined1 *)((long)puVar10 + 0x26) = uVar3;
        *(byte *)((long)puVar10 + 0x27) = bVar9;
        *(undefined8 *)((long)puVar10 + 0x1a) = uVar7;
        *(undefined4 *)((long)puVar10 + 0x22) = uVar1;
        puVar10[5] = CONCAT17(uStack_59,local_60);
        *(undefined8 *)((long)puVar10 + 0x2f) = uVar8;
      }
    }
  }
  return;
}

