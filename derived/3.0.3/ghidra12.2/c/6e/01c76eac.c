
/* WARNING: Removing unreachable block (ram,0x01c77300) */
/* WARNING: Removing unreachable block (ram,0x01c7712c) */
/* WARNING: Removing unreachable block (ram,0x01c77150) */

void FUN_01c76eac(long param_1)

{
  void *__s;
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  char *__dest;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined1 uStack_21;
  
  if (*(char *)(param_1 + 0x220) == '\0' || *(char *)(param_1 + 0xbc) == '\0') goto LAB_01c77210;
  __s = (void *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0xb8) == 3) {
LAB_01c76f50:
    lVar6 = *(long *)(param_1 + 0x218);
    cVar2 = *(char *)(lVar6 + 0x161);
joined_r0x01c76f58:
    if (cVar2 == '\0') {
      *(undefined1 *)(lVar6 + 0x161) = 1;
    }
    *(undefined1 *)(lVar6 + 0x160) = 0;
  }
  else if (*(int *)(param_1 + 0xb8) == 0) {
    if ((*(char *)(param_1 + 0x1f0) != '\0') &&
       ((((pcVar9 = *(char **)(param_1 + 0x218), pcVar9[0x58] == '\0' || (pcVar9[0x130] == '\0')) ||
         (pcVar9[0x140] == '\0')) || (*pcVar9 != '\0')))) {
      __dest = pcVar9 + 0x20;
      __dest[0] = '\0';
      __dest[1] = '\0';
      __dest[2] = '\0';
      __dest[3] = '\0';
      __dest[4] = '\0';
      __dest[5] = '\0';
      __dest[6] = '\0';
      __dest[7] = '\0';
      pcVar9[0x48] = '\0';
      pcVar9[0x49] = '\0';
      pcVar9[0x4a] = '\0';
      pcVar9[0x4b] = '\0';
      pcVar9[0x4c] = '\0';
      pcVar9[0x4d] = '\0';
      pcVar9[0x4e] = '\0';
      pcVar9[0x4f] = '\0';
      pcVar9[0x50] = '\0';
      pcVar9[0x51] = '\0';
      pcVar9[0x52] = '\0';
      pcVar9[0x53] = '\0';
      pcVar9[0x54] = '\0';
      pcVar9[0x55] = '\0';
      pcVar9[0x56] = '\0';
      pcVar9[0x57] = '\0';
      pcVar9[0x58] = '\x01';
      pcVar9[0x38] = '\0';
      pcVar9[0x39] = '\0';
      pcVar9[0x3a] = '\0';
      pcVar9[0x3b] = '\0';
      pcVar9[0x3c] = '\0';
      pcVar9[0x3d] = '\0';
      pcVar9[0x3e] = '\0';
      pcVar9[0x3f] = '\0';
      pcVar9[0x40] = '\0';
      pcVar9[0x41] = '\0';
      pcVar9[0x42] = '\0';
      pcVar9[0x43] = '\0';
      pcVar9[0x44] = '\0';
      pcVar9[0x45] = '\0';
      pcVar9[0x46] = '\0';
      pcVar9[0x47] = '\0';
      pcVar9[0x28] = '\0';
      pcVar9[0x29] = '\0';
      pcVar9[0x2a] = '\0';
      pcVar9[0x2b] = '\0';
      pcVar9[0x2c] = '\0';
      pcVar9[0x2d] = '\0';
      pcVar9[0x2e] = '\0';
      pcVar9[0x2f] = '\0';
      pcVar9[0x30] = '\0';
      pcVar9[0x31] = '\0';
      pcVar9[0x32] = '\0';
      pcVar9[0x33] = '\0';
      pcVar9[0x34] = '\0';
      pcVar9[0x35] = '\0';
      pcVar9[0x36] = '\0';
      pcVar9[0x37] = '\0';
      if (*(byte *)(param_1 + 0xd0) - 4 < 0xfffffffe) {
LAB_01c76f48:
        cVar2 = *(char *)(param_1 + 0x220);
      }
      else {
        if (*(byte *)(param_1 + 0xd0) != 3) {
          if (*(long *)(param_1 + 200) == 0x35) {
            memmove(__dest,(undefined8 *)(param_1 + 0xd1),0x32);
            pcVar9[0x54] = '\0';
            pcVar9[0x55] = '\0';
            pcVar9[0x56] = '\0';
            pcVar9[0x57] = '\0';
            goto LAB_01c76fc0;
          }
          goto LAB_01c76f48;
        }
        if (*(long *)(param_1 + 200) != 0x39) goto LAB_01c76f48;
        uVar10 = *(undefined8 *)(param_1 + 0xd1);
        uVar7 = *(undefined8 *)(param_1 + 0xe1);
        *(undefined8 *)(pcVar9 + 0x28) = *(undefined8 *)(param_1 + 0xd9);
        *(undefined8 *)(pcVar9 + 0x30) = uVar7;
        *(undefined8 *)__dest = uVar10;
        uVar10 = *(undefined8 *)(param_1 + 0xe9);
        uVar7 = *(undefined8 *)(param_1 + 0xf1);
        uVar1 = *(undefined8 *)(param_1 + 0x101);
        *(undefined8 *)(pcVar9 + 0x48) = *(undefined8 *)(param_1 + 0xf9);
        *(undefined8 *)(pcVar9 + 0x50) = uVar1;
        *(undefined8 *)(pcVar9 + 0x38) = uVar10;
        *(undefined8 *)(pcVar9 + 0x40) = uVar7;
LAB_01c76fc0:
        lVar6 = FUN_00a7f6d4(pcVar9 + 0x30);
        if (((lVar6 == 0) || (3 < (byte)pcVar9[0x4f])) || (2 < (byte)pcVar9[0x50]))
        goto LAB_01c76f48;
        cVar2 = *(char *)(param_1 + 0x220);
        if ((byte)pcVar9[0x51] < 4) {
          if (cVar2 == '\0') {
            memset(__s,0,0x1b8);
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(param_1 + 0x218);
          }
          if (*(char *)(lVar6 + 0x58) == '\0') {
            *(undefined8 *)(lVar6 + 0x48) = 0;
            *(undefined8 *)(lVar6 + 0x50) = 0;
            *(undefined8 *)(lVar6 + 0x20) = 0;
            *(undefined8 *)(lVar6 + 0x38) = 0;
            *(undefined8 *)(lVar6 + 0x40) = 0;
            *(undefined8 *)(lVar6 + 0x28) = 0;
            *(undefined8 *)(lVar6 + 0x30) = 0;
            cVar2 = *(char *)(param_1 + 0x220);
          }
          else if ((*(int *)(lVar6 + 0x28) == 0xa0028) && (*(int *)(lVar6 + 0x2c) == 0xa0002)) {
            *(undefined8 *)(lVar6 + 0x5c) = 0;
            *(undefined4 *)(lVar6 + 300) = 0;
            *(undefined8 *)(lVar6 + 0x11c) = 0;
            *(undefined8 *)(lVar6 + 0x124) = 0;
            *(undefined8 *)(lVar6 + 100) = 0;
            *(undefined1 *)(lVar6 + 0x130) = 1;
            *(undefined8 *)(lVar6 + 0x10c) = 0;
            *(undefined8 *)(lVar6 + 0x114) = 0;
            *(undefined8 *)(lVar6 + 0xfc) = 0;
            *(undefined8 *)(lVar6 + 0x104) = 0;
            *(undefined8 *)(lVar6 + 0xec) = 0;
            *(undefined8 *)(lVar6 + 0xf4) = 0;
            *(undefined8 *)(lVar6 + 0xdc) = 0;
            *(undefined8 *)(lVar6 + 0xe4) = 0;
            *(undefined8 *)(lVar6 + 0xcc) = 0;
            *(undefined8 *)(lVar6 + 0xd4) = 0;
            *(undefined8 *)(lVar6 + 0xbc) = 0;
            *(undefined8 *)(lVar6 + 0xc4) = 0;
            *(undefined8 *)(lVar6 + 0xac) = 0;
            *(undefined8 *)(lVar6 + 0xb4) = 0;
            *(undefined8 *)(lVar6 + 0x9c) = 0;
            *(undefined8 *)(lVar6 + 0xa4) = 0;
            *(undefined8 *)(lVar6 + 0x8c) = 0;
            *(undefined8 *)(lVar6 + 0x94) = 0;
            *(undefined8 *)(lVar6 + 0x7c) = 0;
            *(undefined8 *)(lVar6 + 0x84) = 0;
            *(undefined8 *)(lVar6 + 0x6c) = 0;
            *(undefined8 *)(lVar6 + 0x74) = 0;
            uVar5 = FUN_01cd1db0((undefined8 *)(lVar6 + 0x5c),param_1 + 0xc0);
            if ((uVar5 & 1) == 0) goto LAB_01c76f48;
            uVar10 = *(undefined8 *)(param_1 + 0xc0);
            if (*(char *)(param_1 + 0x220) == '\0') {
              memset(__s,0,0x1b8);
              lVar6 = 0;
            }
            else {
              lVar6 = *(long *)(param_1 + 0x218);
            }
            if (*(char *)(lVar6 + 0x140) == '\0') {
              *(undefined1 *)(lVar6 + 0x140) = 1;
            }
            *(undefined8 *)(lVar6 + 0x138) = uVar10;
            if (*(char *)(param_1 + 0x220) != '\0') goto LAB_01c77114;
            memset(__s,0,0x1b8);
            cVar2 = *(char *)(param_1 + 0x204);
            memset(__s,0,0x1b8);
            if (cVar2 != '\0') {
              bVar4 = false;
              goto LAB_01c77138;
            }
            lVar6 = 0;
            cVar2 = cRam0000000000000161;
            goto joined_r0x01c77320;
          }
        }
      }
      if (cVar2 != '\0') goto LAB_01c76f50;
      memset(__s,0,0x1b8);
      lVar6 = 0;
      cVar2 = cRam0000000000000161;
      goto joined_r0x01c76f58;
    }
LAB_01c77114:
    bVar4 = true;
    if (*(char *)(param_1 + 0x204) == '\0') goto LAB_01c77180;
LAB_01c77138:
    if (*(char *)(param_1 + 0x204) == '\0') {
      *(uint *)(param_1 + 0x200) = 0;
      uVar5 = 0;
      if (*(char *)(param_1 + 0x220) != '\0') goto LAB_01c77164;
LAB_01c772a4:
      memset(__s,0,0x1b8);
      lVar6 = 0;
      cVar2 = SUB_00000018;
    }
    else {
      uVar5 = (ulong)*(uint *)(param_1 + 0x200);
      if (!bVar4) goto LAB_01c772a4;
LAB_01c77164:
      lVar6 = *(long *)(param_1 + 0x218);
      cVar2 = *(char *)(lVar6 + 0x18);
    }
    if (cVar2 == '\0') {
      *(undefined1 *)(lVar6 + 0x18) = 1;
    }
    *(ulong *)(lVar6 + 0x10) = uVar5;
  }
  else {
LAB_01c77180:
    lVar6 = *(long *)(param_1 + 0x218);
    cVar2 = *(char *)(lVar6 + 0x161);
joined_r0x01c77320:
    if (cVar2 == '\0') {
      *(undefined1 *)(lVar6 + 0x161) = 1;
    }
    *(undefined1 *)(lVar6 + 0x160) = 1;
  }
  if (*(char *)(param_1 + 0x220) != '\0') {
    if (*(char *)(param_1 + 0xb0) != '\0') {
      if (*(uint *)(param_1 + 0xa8) != 0xffffffff) {
        (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(param_1 + 0xa8)])(&uStack_21,__s);
      }
      *(undefined1 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    }
    if (*(char *)(param_1 + 0xbc) != '\0') {
      *(undefined1 *)(param_1 + 0xbc) = 0;
    }
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      *(undefined1 *)(param_1 + 0x1f0) = 0;
    }
    if (*(char *)(param_1 + 0x204) != '\0') {
      *(undefined1 *)(param_1 + 0x204) = 0;
    }
    if (*(char *)(param_1 + 0x1fc) != '\0') {
      *(undefined1 *)(param_1 + 0x1fc) = 0;
    }
    *(undefined1 *)(param_1 + 0x220) = 0;
  }
LAB_01c77210:
  if ((*(char *)(param_1 + 0x278) != '\0') && (*(int *)(param_1 + 0x260) == 2)) {
    FUN_03f45838(param_1 + 600);
    plVar8 = *(long **)(param_1 + 0x270);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
      iVar3 = *(int *)(param_1 + 0x264) + -1;
      if (((*(int *)(param_1 + 0x264) < 1) || (*(int *)(param_1 + 0x264) = iVar3, iVar3 == 0)) &&
         (*(long *)(param_1 + 0x268) != 0)) {
        FUN_03f44508();
        *(undefined8 *)(param_1 + 0x268) = 0;
      }
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    *(undefined1 *)(param_1 + 0x278) = 0;
  }
  return;
}

