
void FUN_03087d80(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  
  puVar4 = PTR_DAT_04bc4d98;
  puVar3 = PTR_DAT_04bc4d90;
  if (((*(long *)(param_1 + 0x1670) != 0) &&
      (lVar9 = *(long *)(*(long *)(param_1 + 0x1670) + 0x590), lVar9 != 0)) &&
     (uVar2 = *(uint *)(lVar9 + 0x2f8), 0 < (int)uVar2)) {
    uVar10 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    do {
      if ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x208) && uVar10 < *(uint *)(lVar9 + 0x208)) {
        puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x210) + uVar10 * 8);
      }
      else {
        puVar8 = (undefined8 *)0x0;
      }
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((puVar8 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar8)(puVar8,puVar3), (uVar6 & 1) != 0)) {
        switch(param_2) {
        case 0:
          bVar7 = *(byte *)(puVar8 + 0x58) & 0xf8 | 2;
          break;
        case 1:
          bVar7 = *(byte *)(puVar8 + 0x58) & 0xf8;
          break;
        case 2:
        case 3:
          bVar7 = *(byte *)(puVar8 + 0x58) & 0xf8 | 1;
          break;
        case 4:
          bVar7 = *(byte *)(puVar8 + 0x58) & 0xf8 | 5;
          break;
        default:
          goto switchD_03087e78_default;
        }
        *(byte *)(puVar8 + 0x58) = bVar7;
switchD_03087e78_default:
        *(undefined4 *)(puVar8 + 0x56) = param_2;
      }
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
  }
  return;
}

