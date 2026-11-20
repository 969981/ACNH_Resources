
void FUN_03fc3830(long param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = param_1 + 0x45a00U;
  if (*(char *)(param_1 + 0x3170e8) != '\0') {
    uVar2 = param_1 + 0x45950;
  }
  do {
    bVar1 = *(byte *)(uVar2 + 0x20);
    *(uint *)(uVar2 + 0x1c) = *(uint *)(uVar2 + 0x1c) & 0x3f3f3f3f;
    uVar3 = (ulong)bVar1 & 0x3f;
    *(char *)(uVar2 + 0x20) = (char)uVar3;
    if (*(char *)(uVar2 + 0x7c) == '\0') {
      uVar3 = (ulong)*(byte *)(uVar2 + 0x17);
      *(byte *)(uVar2 + 0x7d) = *(byte *)(uVar2 + 0x17);
      switch(*(undefined1 *)(uVar2 + 0x10)) {
      case 1:
        lVar5 = uVar2 + uVar3;
        uVar4 = (ulong)*(byte *)(lVar5 + 0x1c) | 0xc0;
        break;
      case 2:
        lVar5 = uVar2 + uVar3;
        uVar4 = (ulong)*(byte *)(lVar5 + 0x1c) | 0x40;
        *(char *)(lVar5 + 0x1c) = (char)uVar4;
        *(undefined **)(uVar2 + uVar3 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar4 * 2];
        *(undefined *)(lVar5 + 0x50) = (&DAT_04bafad8)[uVar4 * 0x10];
        goto LAB_03fc3a54;
      case 3:
        lVar5 = uVar2 + uVar3;
        uVar4 = (ulong)*(byte *)(lVar5 + 0x1c) | 0x40;
        *(char *)(lVar5 + 0x1c) = (char)uVar4;
        *(undefined **)(uVar2 + uVar3 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar4 * 2];
        *(undefined *)(lVar5 + 0x50) = (&DAT_04bafad8)[uVar4 * 0x10];
        goto LAB_03fc3a84;
      case 4:
        lVar5 = uVar2 + uVar3;
        uVar4 = (ulong)*(byte *)(lVar5 + 0x1c) | 0x40;
        *(char *)(lVar5 + 0x1c) = (char)uVar4;
        *(undefined **)(uVar2 + uVar3 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar4 * 2];
        *(undefined *)(lVar5 + 0x50) = (&DAT_04bafad8)[uVar4 * 0x10];
        goto LAB_03fc3ad8;
      default:
        goto switchD_03fc38e4_default;
      }
    }
    else {
      switch(*(undefined1 *)(uVar2 + 0x10)) {
      case 0:
        uVar4 = (ulong)bVar1 | 0xc0;
        *(undefined1 *)(uVar2 + 0x7d) = 4;
        uVar3 = 4;
        *(char *)(uVar2 + 0x20) = (char)uVar4;
        goto LAB_03fc3884;
      case 1:
        uVar3 = uVar3 | 0x40;
        *(undefined1 *)(uVar2 + 0x7d) = 4;
        *(char *)(uVar2 + 0x20) = (char)uVar3;
        *(undefined **)(uVar2 + 0x48) = (&PTR_FUN_04bafad0)[uVar3 * 2];
        *(undefined *)(uVar2 + 0x54) = (&DAT_04bafad8)[uVar3 * 0x10];
        uVar3 = (ulong)*(byte *)(uVar2 + 0x17);
        break;
      case 2:
        bVar1 = *(byte *)(uVar2 + 0x17);
        *(byte *)(uVar2 + 0x7d) = bVar1;
        lVar5 = uVar2 + bVar1;
        uVar3 = (ulong)*(byte *)(lVar5 + 0x1c) | 0x40;
        *(char *)(lVar5 + 0x1c) = (char)uVar3;
        *(undefined **)(uVar2 + (ulong)bVar1 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar3 * 2];
        *(undefined *)(lVar5 + 0x50) = (&DAT_04bafad8)[uVar3 * 0x10];
        *(undefined **)(uVar2 + 0x48) = (&PTR_FUN_04bafad0)[(ulong)*(byte *)(uVar2 + 0x20) * 2];
        *(undefined *)(uVar2 + 0x54) = (&DAT_04bafad8)[(ulong)*(byte *)(uVar2 + 0x20) * 0x10];
LAB_03fc3a54:
        uVar3 = (ulong)*(byte *)(uVar2 + 0x18);
        break;
      case 3:
        bVar1 = *(byte *)(uVar2 + 0x17);
        *(byte *)(uVar2 + 0x7d) = bVar1;
        lVar5 = uVar2 + bVar1;
        uVar3 = (ulong)*(byte *)(lVar5 + 0x1c) | 0x40;
        *(char *)(lVar5 + 0x1c) = (char)uVar3;
        *(undefined **)(uVar2 + (ulong)bVar1 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar3 * 2];
        *(undefined *)(lVar5 + 0x50) = (&DAT_04bafad8)[uVar3 * 0x10];
        *(undefined **)(uVar2 + 0x48) = (&PTR_FUN_04bafad0)[(ulong)*(byte *)(uVar2 + 0x20) * 2];
        *(undefined *)(uVar2 + 0x54) = (&DAT_04bafad8)[(ulong)*(byte *)(uVar2 + 0x20) * 0x10];
LAB_03fc3a84:
        lVar5 = uVar2 + *(byte *)(uVar2 + 0x18);
        uVar3 = (ulong)*(byte *)(lVar5 + 0x1c);
        *(undefined **)(uVar2 + (ulong)*(byte *)(uVar2 + 0x18) * 8 + 0x28) =
             (&PTR_FUN_04bafad0)[uVar3 * 2];
        *(undefined *)(lVar5 + 0x50) = (&DAT_04bafad8)[uVar3 * 0x10];
        uVar3 = (ulong)*(byte *)(uVar2 + 0x19);
        break;
      case 4:
        bVar1 = *(byte *)(uVar2 + 0x17);
        *(byte *)(uVar2 + 0x7d) = bVar1;
        lVar5 = uVar2 + bVar1;
        uVar3 = (ulong)*(byte *)(lVar5 + 0x1c) | 0x40;
        *(char *)(lVar5 + 0x1c) = (char)uVar3;
        *(undefined **)(uVar2 + (ulong)bVar1 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar3 * 2];
        *(undefined *)(lVar5 + 0x50) = (&DAT_04bafad8)[uVar3 * 0x10];
        *(undefined **)(uVar2 + 0x48) = (&PTR_FUN_04bafad0)[(ulong)*(byte *)(uVar2 + 0x20) * 2];
        *(undefined *)(uVar2 + 0x54) = (&DAT_04bafad8)[(ulong)*(byte *)(uVar2 + 0x20) * 0x10];
LAB_03fc3ad8:
        lVar5 = uVar2 + *(byte *)(uVar2 + 0x18);
        uVar3 = (ulong)*(byte *)(lVar5 + 0x1c);
        *(undefined **)(uVar2 + (ulong)*(byte *)(uVar2 + 0x18) * 8 + 0x28) =
             (&PTR_FUN_04bafad0)[uVar3 * 2];
        *(undefined *)(lVar5 + 0x50) = (&DAT_04bafad8)[uVar3 * 0x10];
        lVar5 = uVar2 + *(byte *)(uVar2 + 0x19);
        uVar3 = (ulong)*(byte *)(lVar5 + 0x1c);
        *(undefined **)(uVar2 + (ulong)*(byte *)(uVar2 + 0x19) * 8 + 0x28) =
             (&PTR_FUN_04bafad0)[uVar3 * 2];
        *(undefined *)(lVar5 + 0x50) = (&DAT_04bafad8)[uVar3 * 0x10];
        uVar3 = (ulong)*(byte *)(uVar2 + 0x1a);
        break;
      default:
        goto switchD_03fc38e4_default;
      }
      lVar5 = uVar2 + uVar3;
      uVar4 = (ulong)*(byte *)(lVar5 + 0x1c) | 0x80;
    }
    *(char *)(lVar5 + 0x1c) = (char)uVar4;
LAB_03fc3884:
    *(undefined **)(uVar2 + uVar3 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar4 * 2];
    *(undefined *)(uVar2 + uVar3 + 0x50) = (&DAT_04bafad8)[uVar4 * 0x10];
switchD_03fc38e4_default:
    uVar2 = uVar2 + 0xb0;
    if (param_1 + 0x45a00U < uVar2) {
      return;
    }
  } while( true );
}

