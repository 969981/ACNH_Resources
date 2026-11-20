
void FUN_03fc3320(long param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar5 = 0;
  puVar1 = (uint *)(param_1 + 0x45ac8);
  uVar6 = param_1 + 0x45a00U;
  if (*(char *)(param_1 + 0x3170e8) != '\0') {
    uVar6 = param_1 + 0x45950;
  }
  do {
    bVar4 = *(byte *)(uVar6 + 0x20);
    *(uint *)(uVar6 + 0x1c) = *(uint *)(uVar6 + 0x1c) & 0x3f3f3f3f;
    uVar7 = bVar4 & 0x3f;
    *(char *)(uVar6 + 0x20) = (char)uVar7;
    if (*(char *)(uVar6 + 0x7c) == '\0') {
      uVar9 = (ulong)*(byte *)(uVar6 + 0x17);
      *(byte *)(uVar6 + 0x7d) = *(byte *)(uVar6 + 0x17);
      switch(*(undefined1 *)(uVar6 + 0x10)) {
      case 1:
        lVar2 = uVar6 + uVar9;
        uVar11 = (ulong)*(byte *)(lVar2 + 0x1c) | 0xc0;
        *(char *)(lVar2 + 0x1c) = (char)uVar11;
        *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
        *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
        uVar7 = *(uint *)(param_1 + uVar9 * 4 + 0x45ab8);
        break;
      case 2:
        lVar2 = uVar6 + uVar9;
        uVar11 = (ulong)*(byte *)(lVar2 + 0x1c) | 0x40;
        *(char *)(lVar2 + 0x1c) = (char)uVar11;
        *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
        *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
        uVar11 = (ulong)*(byte *)(uVar6 + 0x18);
        uVar7 = *(uint *)(param_1 + 0x45ab8 + uVar9 * 4);
        lVar2 = uVar6 + uVar11;
        uVar9 = (ulong)*(byte *)(lVar2 + 0x1c) | 0x80;
        *(char *)(lVar2 + 0x1c) = (char)uVar9;
        *(undefined **)(uVar6 + uVar11 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar9 * 2];
        *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar9 * 0x10];
        uVar7 = uVar7 | *(uint *)(param_1 + 0x45ab8 + uVar11 * 4);
        break;
      case 3:
        lVar2 = uVar6 + uVar9;
        uVar11 = (ulong)*(byte *)(lVar2 + 0x1c) | 0x40;
        *(char *)(lVar2 + 0x1c) = (char)uVar11;
        *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
        *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
        uVar11 = (ulong)*(byte *)(uVar6 + 0x18);
        uVar8 = *(uint *)(param_1 + 0x45ab8 + uVar9 * 4);
        uVar9 = (ulong)*(byte *)(uVar6 + uVar11 + 0x1c);
        *(undefined **)(uVar6 + uVar11 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar9 * 2];
        *(undefined *)(uVar6 + uVar11 + 0x50) = (&DAT_04bafad8)[uVar9 * 0x10];
        bVar4 = *(byte *)(uVar6 + 0x19);
        uVar7 = *(uint *)(param_1 + 0x45ab8 + uVar11 * 4);
        goto LAB_03fc372c;
      case 4:
        lVar2 = uVar6 + uVar9;
        uVar11 = (ulong)*(byte *)(lVar2 + 0x1c) | 0x40;
        *(char *)(lVar2 + 0x1c) = (char)uVar11;
        *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
        *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
        uVar11 = (ulong)*(byte *)(uVar6 + 0x18);
        uVar8 = *(uint *)(param_1 + 0x45ab8 + uVar9 * 4);
        uVar9 = (ulong)*(byte *)(uVar6 + uVar11 + 0x1c);
        *(undefined **)(uVar6 + uVar11 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar9 * 2];
        *(undefined *)(uVar6 + uVar11 + 0x50) = (&DAT_04bafad8)[uVar9 * 0x10];
        uVar9 = (ulong)*(byte *)(uVar6 + 0x19);
        uVar7 = *(uint *)(param_1 + 0x45ab8 + uVar11 * 4);
        uVar11 = (ulong)*(byte *)(uVar6 + uVar9 + 0x1c);
        *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
        *(undefined *)(uVar6 + uVar9 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
        bVar4 = *(byte *)(uVar6 + 0x1a);
        goto LAB_03fc37e8;
      default:
        goto switchD_03fc33e8_default;
      }
      goto LAB_03fc33a0;
    }
    switch(*(undefined1 *)(uVar6 + 0x10)) {
    case 0:
      bVar4 = bVar4 | 0xc0;
      *(undefined1 *)(uVar6 + 0x7d) = 4;
      *(byte *)(uVar6 + 0x20) = bVar4;
      *(undefined **)(uVar6 + 0x48) = (&PTR_FUN_04bafad0)[(ulong)bVar4 * 2];
      *(undefined *)(uVar6 + 0x54) = (&DAT_04bafad8)[(ulong)bVar4 * 0x10];
      uVar7 = *puVar1;
      goto LAB_03fc33a0;
    case 1:
      uVar7 = uVar7 | 0x40;
      *(undefined1 *)(uVar6 + 0x7d) = 4;
      *(char *)(uVar6 + 0x20) = (char)uVar7;
      *(undefined **)(uVar6 + 0x48) = (&PTR_FUN_04bafad0)[(ulong)uVar7 * 2];
      uVar11 = (ulong)*(byte *)(uVar6 + 0x17);
      lVar2 = uVar6 + uVar11;
      *(undefined *)(uVar6 + 0x54) = (&DAT_04bafad8)[(ulong)uVar7 * 0x10];
      uVar7 = *puVar1;
      uVar9 = (ulong)*(byte *)(lVar2 + 0x1c) | 0x80;
      *(char *)(lVar2 + 0x1c) = (char)uVar9;
      *(undefined **)(uVar6 + uVar11 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar9 * 2];
      *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar9 * 0x10];
      uVar5 = uVar7 | uVar5 | *(uint *)(param_1 + uVar11 * 4 + 0x45ab8);
      break;
    case 2:
      uVar9 = (ulong)*(byte *)(uVar6 + 0x17);
      *(byte *)(uVar6 + 0x7d) = *(byte *)(uVar6 + 0x17);
      lVar2 = uVar6 + uVar9;
      uVar11 = (ulong)*(byte *)(lVar2 + 0x1c) | 0x40;
      *(char *)(lVar2 + 0x1c) = (char)uVar11;
      *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
      *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
      uVar8 = *(uint *)(param_1 + 0x45ab8 + uVar9 * 4);
      *(undefined **)(uVar6 + 0x48) = (&PTR_FUN_04bafad0)[(ulong)*(byte *)(uVar6 + 0x20) * 2];
      bVar4 = *(byte *)(uVar6 + 0x18);
      *(undefined *)(uVar6 + 0x54) = (&DAT_04bafad8)[(ulong)*(byte *)(uVar6 + 0x20) * 0x10];
      uVar7 = *puVar1;
LAB_03fc372c:
      uVar9 = (ulong)bVar4;
      lVar2 = uVar6 + uVar9;
      uVar11 = (ulong)*(byte *)(lVar2 + 0x1c) | 0x80;
      *(char *)(lVar2 + 0x1c) = (char)uVar11;
      *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
      *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
      uVar10 = *(uint *)(param_1 + 0x45ab8 + uVar9 * 4);
      goto LAB_03fc3758;
    case 3:
      uVar9 = (ulong)*(byte *)(uVar6 + 0x17);
      *(byte *)(uVar6 + 0x7d) = *(byte *)(uVar6 + 0x17);
      lVar2 = uVar6 + uVar9;
      uVar11 = (ulong)*(byte *)(lVar2 + 0x1c) | 0x40;
      *(char *)(lVar2 + 0x1c) = (char)uVar11;
      *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
      *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
      uVar8 = *(uint *)(param_1 + 0x45ab8 + uVar9 * 4);
      *(undefined **)(uVar6 + 0x48) = (&PTR_FUN_04bafad0)[(ulong)*(byte *)(uVar6 + 0x20) * 2];
      uVar9 = (ulong)*(byte *)(uVar6 + 0x18);
      *(undefined *)(uVar6 + 0x54) = (&DAT_04bafad8)[(ulong)*(byte *)(uVar6 + 0x20) * 0x10];
      uVar11 = (ulong)*(byte *)(uVar6 + uVar9 + 0x1c);
      uVar7 = *puVar1;
      *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
      *(undefined *)(uVar6 + uVar9 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
      bVar4 = *(byte *)(uVar6 + 0x19);
LAB_03fc37e8:
      uVar11 = (ulong)bVar4;
      uVar10 = *(uint *)(param_1 + 0x45ab8 + uVar9 * 4);
      lVar2 = uVar6 + uVar11;
      uVar9 = (ulong)*(byte *)(lVar2 + 0x1c) | 0x80;
      *(char *)(lVar2 + 0x1c) = (char)uVar9;
      *(undefined **)(uVar6 + uVar11 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar9 * 2];
      *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar9 * 0x10];
      uVar7 = uVar8 | uVar7 | uVar10 | *(uint *)(param_1 + 0x45ab8 + uVar11 * 4);
LAB_03fc33a0:
      uVar5 = uVar7 | uVar5;
      break;
    case 4:
      uVar9 = (ulong)*(byte *)(uVar6 + 0x17);
      *(byte *)(uVar6 + 0x7d) = *(byte *)(uVar6 + 0x17);
      lVar2 = uVar6 + uVar9;
      uVar11 = (ulong)*(byte *)(lVar2 + 0x1c) | 0x40;
      *(char *)(lVar2 + 0x1c) = (char)uVar11;
      *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
      *(undefined *)(lVar2 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
      lVar2 = param_1 + 0x45ab8;
      uVar8 = *(uint *)(lVar2 + uVar9 * 4);
      *(undefined **)(uVar6 + 0x48) = (&PTR_FUN_04bafad0)[(ulong)*(byte *)(uVar6 + 0x20) * 2];
      uVar9 = (ulong)*(byte *)(uVar6 + 0x18);
      *(undefined *)(uVar6 + 0x54) = (&DAT_04bafad8)[(ulong)*(byte *)(uVar6 + 0x20) * 0x10];
      uVar11 = (ulong)*(byte *)(uVar6 + uVar9 + 0x1c);
      uVar8 = uVar8 | *puVar1;
      *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
      *(undefined *)(uVar6 + uVar9 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
      uVar11 = (ulong)*(byte *)(uVar6 + 0x19);
      uVar7 = *(uint *)(lVar2 + uVar9 * 4);
      uVar9 = (ulong)*(byte *)(uVar6 + uVar11 + 0x1c);
      *(undefined **)(uVar6 + uVar11 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar9 * 2];
      *(undefined *)(uVar6 + uVar11 + 0x50) = (&DAT_04bafad8)[uVar9 * 0x10];
      uVar9 = (ulong)*(byte *)(uVar6 + 0x1a);
      lVar3 = uVar6 + uVar9;
      uVar7 = uVar7 | *(uint *)(lVar2 + uVar11 * 4);
      uVar11 = (ulong)*(byte *)(lVar3 + 0x1c) | 0x80;
      *(char *)(lVar3 + 0x1c) = (char)uVar11;
      *(undefined **)(uVar6 + uVar9 * 8 + 0x28) = (&PTR_FUN_04bafad0)[uVar11 * 2];
      *(undefined *)(lVar3 + 0x50) = (&DAT_04bafad8)[uVar11 * 0x10];
      uVar10 = *(uint *)(lVar2 + uVar9 * 4);
LAB_03fc3758:
      uVar5 = uVar8 | uVar7 | uVar10 | uVar5;
    }
switchD_03fc33e8_default:
    uVar6 = uVar6 + 0xb0;
    if (param_1 + 0x45a00U < uVar6) {
      FUN_03fc20a0(param_1,uVar5);
      return;
    }
  } while( true );
}

