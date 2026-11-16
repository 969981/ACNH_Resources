
void FUN_0284b4d0(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong local_38;
  
  if (*(char *)(param_1 + 0x2f) == '\x02') {
    uVar6 = FUN_0284a8e4();
    if ((uVar6 & 1) != 0) {
      bVar4 = *(byte *)(param_1 + 0x2c);
      uVar6 = (ulong)(char)bVar4;
      if ((bVar4 < 10) && ((&DAT_053fee41)[(uVar6 & 0xffffffff) * 0xba0] != '\0')) {
        cVar5 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
        uVar1 = (int)cVar5 + 0x18;
        if (4 < cVar5) {
          uVar1 = (int)cVar5;
        }
        if (1 < *(uint *)(&DAT_053fec08 + (uVar6 & 0xffffffff) * 0xba0)) {
          lVar13 = *(long *)((&DAT_053fec00)[(uVar6 & 0xffffffff) * 0x174] + 8);
          if (lVar13 != 0 && (byte *)(lVar13 + -0x10) != (byte *)0x0) {
            bVar2 = *(byte *)(lVar13 + -0x10);
            uVar1 = uVar1 & 0xff;
            uVar12 = (uint)bVar2;
            bVar3 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
            if (uVar12 <= uVar1 && uVar1 != bVar2) {
              return;
            }
            if (bVar3 == *(byte *)(lVar13 + -0xf) && uVar1 == uVar12) {
              return;
            }
            if (*(byte *)(lVar13 + -0xf) < bVar3 && uVar1 == uVar12) {
              return;
            }
          }
        }
      }
      puVar10 = &DAT_053fe348 + (uVar6 & 0xffffffff) * 0xba0;
      if (9 < bVar4) {
        puVar10 = &DAT_053fe348;
      }
      if ((*(long *)(puVar10 + 0xaa0) == 0) || (*(int *)(*(long *)(puVar10 + 0xaa0) + 4) != 0x1b)) {
        plVar9 = *(long **)(puVar10 + 0x928);
        if (plVar9 != (long *)(puVar10 + 0x920)) {
          plVar11 = plVar9 + -2;
          do {
            if (*(int *)((long)plVar11 + 4) == 0x1b) {
              if (*plVar9 != 0) {
                *(long *)(*plVar9 + 8) = plVar9[1];
              }
              if ((long *)plVar9[1] != (long *)0x0) {
                *(long *)plVar9[1] = *plVar9;
              }
              *plVar9 = 0;
              plVar9[1] = 0;
              *(int *)(puVar10 + 0x930) = *(int *)(puVar10 + 0x930) + -1;
              *plVar11 = *(long *)(puVar10 + 0x938);
              *(long **)(puVar10 + 0x938) = plVar11;
              break;
            }
            plVar9 = (long *)plVar9[1];
            plVar11 = plVar9 + -2;
          } while (plVar11 != (long *)(puVar10 + 0x910));
        }
      }
      else {
        FUN_0214eb90(puVar10 + 0x8b0,uVar6,1);
      }
    }
    if ((*(char *)(param_1 + 0x2f) == '\x02') &&
       (local_38 = *(ulong *)(param_1 + 0x24), (local_38 & 0xffff) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bb32e8;
      lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar8 + 0x4060));
      if ((lVar13 <= lVar7) &&
         (lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar8 + 0x4060)), lVar7 != lVar13))
      {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  return;
}

