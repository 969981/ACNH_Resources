
/* WARNING: Removing unreachable block (ram,0x014fd0bc) */
/* WARNING: Removing unreachable block (ram,0x014fd06c) */
/* WARNING: Removing unreachable block (ram,0x014fcfb8) */
/* WARNING: Removing unreachable block (ram,0x014fcfc8) */
/* WARNING: Removing unreachable block (ram,0x014fcfd4) */
/* WARNING: Removing unreachable block (ram,0x014fce38) */
/* WARNING: Removing unreachable block (ram,0x014fce08) */
/* WARNING: Removing unreachable block (ram,0x014fcd94) */
/* WARNING: Removing unreachable block (ram,0x014fce88) */
/* WARNING: Removing unreachable block (ram,0x014fcc5c) */
/* WARNING: Removing unreachable block (ram,0x014fca10) */
/* WARNING: Removing unreachable block (ram,0x014fc9e4) */
/* WARNING: Removing unreachable block (ram,0x014fc7c0) */
/* WARNING: Removing unreachable block (ram,0x014fc794) */
/* WARNING: Removing unreachable block (ram,0x014fc570) */
/* WARNING: Removing unreachable block (ram,0x014fc544) */
/* WARNING: Removing unreachable block (ram,0x014fc320) */
/* WARNING: Removing unreachable block (ram,0x014fc2c4) */
/* WARNING: Removing unreachable block (ram,0x014fc210) */
/* WARNING: Removing unreachable block (ram,0x014fc220) */
/* WARNING: Removing unreachable block (ram,0x014fc22c) */
/* WARNING: Removing unreachable block (ram,0x014fc0bc) */
/* WARNING: Removing unreachable block (ram,0x014fc090) */
/* WARNING: Removing unreachable block (ram,0x014fc01c) */
/* WARNING: Removing unreachable block (ram,0x014fc108) */
/* WARNING: Removing unreachable block (ram,0x014fc00c) */
/* WARNING: Removing unreachable block (ram,0x014fc028) */
/* WARNING: Removing unreachable block (ram,0x014fc080) */
/* WARNING: Removing unreachable block (ram,0x014fc148) */
/* WARNING: Removing unreachable block (ram,0x014fc284) */
/* WARNING: Removing unreachable block (ram,0x014fc294) */
/* WARNING: Removing unreachable block (ram,0x014fc2dc) */
/* WARNING: Removing unreachable block (ram,0x014fc2ec) */
/* WARNING: Removing unreachable block (ram,0x014fc390) */
/* WARNING: Removing unreachable block (ram,0x014fc468) */
/* WARNING: Removing unreachable block (ram,0x014fc478) */
/* WARNING: Removing unreachable block (ram,0x014fc484) */
/* WARNING: Removing unreachable block (ram,0x014fc5e0) */
/* WARNING: Removing unreachable block (ram,0x014fc6b8) */
/* WARNING: Removing unreachable block (ram,0x014fc6c8) */
/* WARNING: Removing unreachable block (ram,0x014fc6d4) */
/* WARNING: Removing unreachable block (ram,0x014fc830) */
/* WARNING: Removing unreachable block (ram,0x014fc908) */
/* WARNING: Removing unreachable block (ram,0x014fc918) */
/* WARNING: Removing unreachable block (ram,0x014fc924) */
/* WARNING: Removing unreachable block (ram,0x014fca80) */
/* WARNING: Removing unreachable block (ram,0x014fcca8) */
/* WARNING: Removing unreachable block (ram,0x014fcd84) */
/* WARNING: Removing unreachable block (ram,0x014fcda0) */
/* WARNING: Removing unreachable block (ram,0x014fcdf8) */
/* WARNING: Removing unreachable block (ram,0x014fcecc) */
/* WARNING: Removing unreachable block (ram,0x014fd02c) */
/* WARNING: Removing unreachable block (ram,0x014fd03c) */
/* WARNING: Removing unreachable block (ram,0x014fd108) */
/* WARNING: Removing unreachable block (ram,0x014fcbcc) */
/* WARNING: Removing unreachable block (ram,0x014fcb58) */
/* WARNING: Removing unreachable block (ram,0x014fc9bc) */
/* WARNING: Removing unreachable block (ram,0x014fc97c) */
/* WARNING: Removing unreachable block (ram,0x014fc76c) */
/* WARNING: Removing unreachable block (ram,0x014fc72c) */
/* WARNING: Removing unreachable block (ram,0x014fc51c) */
/* WARNING: Removing unreachable block (ram,0x014fc4dc) */
/* WARNING: Removing unreachable block (ram,0x014fc4ec) */
/* WARNING: Removing unreachable block (ram,0x014fc534) */
/* WARNING: Removing unreachable block (ram,0x014fc73c) */
/* WARNING: Removing unreachable block (ram,0x014fc784) */
/* WARNING: Removing unreachable block (ram,0x014fc98c) */
/* WARNING: Removing unreachable block (ram,0x014fc9d4) */
/* WARNING: Removing unreachable block (ram,0x014fcb68) */
/* WARNING: Removing unreachable block (ram,0x014fcb74) */
/* WARNING: Removing unreachable block (ram,0x014fcbdc) */
/* WARNING: Removing unreachable block (ram,0x014fcc0c) */

void FUN_014fbfb0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bbc188;
  puVar2 = PTR_DAT_04bb27a8;
  uVar6 = *(uint *)(param_1 + 8);
  lVar5 = *(long *)PTR_DAT_04bb27a8;
  if (uVar6 == 0) {
    if ((*(long *)(lVar5 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar5 + 0x1f8) + 0x60) != 0)) {
LAB_014fc12c:
      plVar4 = (long *)(lVar5 + 0x1f8);
LAB_014fc130:
      lVar8 = *plVar4;
LAB_014fc134:
      if ((*(long *)(lVar8 + 0xd0) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0xd0) + 0x18), lVar8 != 0)) {
        uVar1 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
        if (0 < (int)uVar1) {
          uVar7 = 0;
          if (uVar1 != 1) {
            do {
              lVar5 = uVar7 * 4;
              uVar7 = uVar7 + 2;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5) = *(undefined4 *)puVar3;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5 + 4) = *(undefined4 *)puVar3;
            } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined4 *)(*(long *)(lVar8 + 0x10) + uVar7 * 4) = *(undefined4 *)puVar3;
          }
          uVar6 = *(uint *)(param_1 + 8);
          lVar5 = *(long *)puVar2;
        }
      }
      if (uVar6 != 0) goto LAB_014fc1cc;
    }
    if ((*(long *)(lVar5 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar5 + 0x1f8) + 0x68) != 0)) {
      plVar4 = (long *)(lVar5 + 0x1f8);
      uVar6 = 0;
LAB_014fc374:
      lVar8 = *plVar4;
LAB_014fc378:
      puVar3 = PTR_DAT_04bbc188;
      if ((*(long *)(lVar8 + 0xe0) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0xe0) + 0x18), lVar8 != 0)) {
        uVar1 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
        if (0 < (int)uVar1) {
          if (uVar1 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              lVar5 = uVar7 * 4;
              uVar7 = uVar7 + 2;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5) = *(undefined4 *)puVar3;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5 + 4) = *(undefined4 *)puVar3;
            } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined4 *)(*(long *)(lVar8 + 0x10) + uVar7 * 4) = DAT_0517af58;
          }
          uVar6 = *(uint *)(param_1 + 8);
          lVar5 = *(long *)puVar2;
        }
      }
      if (uVar6 != 0) goto LAB_014fc424;
    }
    if ((*(long *)(lVar5 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar5 + 0x1f8) + 0x70) != 0)) {
      plVar4 = (long *)(lVar5 + 0x1f8);
      uVar6 = 0;
LAB_014fc5c4:
      lVar8 = *plVar4;
LAB_014fc5c8:
      puVar3 = PTR_DAT_04bbc188;
      if ((*(long *)(lVar8 + 0xf0) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0xf0) + 0x18), lVar8 != 0)) {
        uVar1 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
        if (0 < (int)uVar1) {
          if (uVar1 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              lVar5 = uVar7 * 4;
              uVar7 = uVar7 + 2;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5) = *(undefined4 *)puVar3;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5 + 4) = *(undefined4 *)puVar3;
            } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined4 *)(*(long *)(lVar8 + 0x10) + uVar7 * 4) = DAT_0517af58;
          }
          uVar6 = *(uint *)(param_1 + 8);
          lVar5 = *(long *)puVar2;
        }
      }
      if (uVar6 != 0) goto LAB_014fc674;
    }
    if ((*(long *)(lVar5 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar5 + 0x1f8) + 0x78) != 0)) {
      plVar4 = (long *)(lVar5 + 0x1f8);
      uVar6 = 0;
LAB_014fc814:
      lVar8 = *plVar4;
LAB_014fc818:
      puVar3 = PTR_DAT_04bbc188;
      if ((*(long *)(lVar8 + 0x100) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x100) + 0x18), lVar8 != 0)) {
        uVar1 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
        if (0 < (int)uVar1) {
          if (uVar1 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              lVar5 = uVar7 * 4;
              uVar7 = uVar7 + 2;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5) = *(undefined4 *)puVar3;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5 + 4) = *(undefined4 *)puVar3;
            } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined4 *)(*(long *)(lVar8 + 0x10) + uVar7 * 4) = DAT_0517af58;
          }
          uVar6 = *(uint *)(param_1 + 8);
          lVar5 = *(long *)puVar2;
        }
      }
      if (uVar6 != 0) goto LAB_014fc8c4;
    }
    if ((*(long *)(lVar5 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar5 + 0x1f8) + 0x80) != 0)) {
      plVar4 = (long *)(lVar5 + 0x1f8);
      uVar6 = 0;
LAB_014fca64:
      lVar8 = *plVar4;
LAB_014fca68:
      puVar3 = PTR_DAT_04bbc188;
      if ((*(long *)(lVar8 + 0x110) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x110) + 0x18), lVar8 != 0)) {
        uVar1 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
        if (0 < (int)uVar1) {
          if (uVar1 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              lVar5 = uVar7 * 4;
              uVar7 = uVar7 + 2;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5) = *(undefined4 *)puVar3;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5 + 4) = *(undefined4 *)puVar3;
            } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined4 *)(*(long *)(lVar8 + 0x10) + uVar7 * 4) = DAT_0517af58;
          }
          uVar6 = *(uint *)(param_1 + 8);
          lVar5 = *(long *)puVar2;
        }
      }
      if (uVar6 != 0) goto LAB_014fcb14;
    }
    if ((*(long *)(lVar5 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar5 + 0x1f8) + 0x88) != 0)) {
LAB_014fcc80:
      plVar4 = (long *)(lVar5 + 0x1f8);
LAB_014fcc84:
      lVar5 = *plVar4;
LAB_014fcc90:
      puVar3 = PTR_DAT_04bbc188;
      if ((*(long *)(lVar5 + 0x120) != 0) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x120) + 0x18), lVar5 != 0)) {
        uVar6 = *(int *)(lVar5 + 0xc) * *(int *)(lVar5 + 8);
        if (0 < (int)uVar6) {
          if (uVar6 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              lVar8 = uVar7 * 4;
              uVar7 = uVar7 + 2;
              *(undefined4 *)(*(long *)(lVar5 + 0x10) + lVar8) = *(undefined4 *)puVar3;
              *(undefined4 *)(*(long *)(lVar5 + 0x10) + lVar8 + 4) = *(undefined4 *)puVar3;
            } while (((ulong)uVar6 & 0xfffffffe) != uVar7);
          }
          if ((uVar6 & 1) != 0) {
            *(undefined4 *)(*(long *)(lVar5 + 0x10) + uVar7 * 4) = DAT_0517af58;
          }
        }
      }
    }
  }
  else {
    if (uVar6 != 0) {
      if (uVar6 == 0) {
        lVar8 = *(long *)(lVar5 + 0x1f8);
      }
      else {
        plVar4 = (long *)(lVar5 + 0x30) + uVar6;
        if (0x38 < uVar6) {
          plVar4 = (long *)(lVar5 + 0x30);
        }
        lVar8 = *plVar4;
      }
      if (lVar8 != 0) {
        if (uVar6 == 0) {
          lVar8 = 0;
        }
        else {
          if (uVar6 == 0) {
            plVar4 = (long *)(lVar5 + 0x1f8);
          }
          else {
            plVar4 = (long *)(lVar5 + 0x30) + uVar6;
            if (0x38 < uVar6) {
              plVar4 = (long *)(lVar5 + 0x30);
            }
          }
          lVar8 = *plVar4;
        }
        if (*(long *)(lVar8 + 0x60) != 0) {
          if (uVar6 != 0) {
            if (uVar6 == 0) goto LAB_014fc12c;
            plVar4 = (long *)(lVar5 + 0x30) + uVar6;
            if (0x38 < uVar6) {
              plVar4 = (long *)(lVar5 + 0x30);
            }
            goto LAB_014fc130;
          }
          lVar8 = 0;
          goto LAB_014fc134;
        }
      }
    }
LAB_014fc1cc:
    if (uVar6 != 0) {
      if (uVar6 == 0) {
        lVar8 = *(long *)(lVar5 + 0x1f8);
      }
      else {
        plVar4 = (long *)(lVar5 + 0x30) + uVar6;
        if (0x38 < uVar6) {
          plVar4 = (long *)(lVar5 + 0x30);
        }
        lVar8 = *plVar4;
      }
      if (lVar8 != 0) {
        if (uVar6 == 0) {
          lVar8 = 0;
        }
        else {
          if (uVar6 == 0) {
            plVar4 = (long *)(lVar5 + 0x1f8);
          }
          else {
            plVar4 = (long *)(lVar5 + 0x30) + uVar6;
            if (0x38 < uVar6) {
              plVar4 = (long *)(lVar5 + 0x30);
            }
          }
          lVar8 = *plVar4;
        }
        if (*(long *)(lVar8 + 0x68) != 0) {
          if (uVar6 != 0) {
            if (uVar6 == 0) {
              plVar4 = (long *)(lVar5 + 0x1f8);
            }
            else {
              plVar4 = (long *)(lVar5 + 0x30) + uVar6;
              if (0x38 < uVar6) {
                plVar4 = (long *)(lVar5 + 0x30);
              }
            }
            goto LAB_014fc374;
          }
          lVar8 = 0;
          goto LAB_014fc378;
        }
      }
    }
LAB_014fc424:
    if (uVar6 != 0) {
      if (uVar6 == 0) {
        lVar8 = *(long *)(lVar5 + 0x1f8);
      }
      else {
        plVar4 = (long *)(lVar5 + 0x30) + uVar6;
        if (0x38 < uVar6) {
          plVar4 = (long *)(lVar5 + 0x30);
        }
        lVar8 = *plVar4;
      }
      if (lVar8 != 0) {
        if (uVar6 == 0) {
          lVar8 = 0;
        }
        else {
          if (uVar6 == 0) {
            plVar4 = (long *)(lVar5 + 0x1f8);
          }
          else {
            plVar4 = (long *)(lVar5 + 0x30) + uVar6;
            if (0x38 < uVar6) {
              plVar4 = (long *)(lVar5 + 0x30);
            }
          }
          lVar8 = *plVar4;
        }
        if (*(long *)(lVar8 + 0x70) != 0) {
          if (uVar6 != 0) {
            if (uVar6 == 0) {
              plVar4 = (long *)(lVar5 + 0x1f8);
            }
            else {
              plVar4 = (long *)(lVar5 + 0x30) + uVar6;
              if (0x38 < uVar6) {
                plVar4 = (long *)(lVar5 + 0x30);
              }
            }
            goto LAB_014fc5c4;
          }
          lVar8 = 0;
          goto LAB_014fc5c8;
        }
      }
    }
LAB_014fc674:
    if (uVar6 != 0) {
      if (uVar6 == 0) {
        lVar8 = *(long *)(lVar5 + 0x1f8);
      }
      else {
        plVar4 = (long *)(lVar5 + 0x30) + uVar6;
        if (0x38 < uVar6) {
          plVar4 = (long *)(lVar5 + 0x30);
        }
        lVar8 = *plVar4;
      }
      if (lVar8 != 0) {
        if (uVar6 == 0) {
          lVar8 = 0;
        }
        else {
          if (uVar6 == 0) {
            plVar4 = (long *)(lVar5 + 0x1f8);
          }
          else {
            plVar4 = (long *)(lVar5 + 0x30) + uVar6;
            if (0x38 < uVar6) {
              plVar4 = (long *)(lVar5 + 0x30);
            }
          }
          lVar8 = *plVar4;
        }
        if (*(long *)(lVar8 + 0x78) != 0) {
          if (uVar6 != 0) {
            if (uVar6 == 0) {
              plVar4 = (long *)(lVar5 + 0x1f8);
            }
            else {
              plVar4 = (long *)(lVar5 + 0x30) + uVar6;
              if (0x38 < uVar6) {
                plVar4 = (long *)(lVar5 + 0x30);
              }
            }
            goto LAB_014fc814;
          }
          lVar8 = 0;
          goto LAB_014fc818;
        }
      }
    }
LAB_014fc8c4:
    if (uVar6 != 0) {
      if (uVar6 == 0) {
        lVar8 = *(long *)(lVar5 + 0x1f8);
      }
      else {
        plVar4 = (long *)(lVar5 + 0x30) + uVar6;
        if (0x38 < uVar6) {
          plVar4 = (long *)(lVar5 + 0x30);
        }
        lVar8 = *plVar4;
      }
      if (lVar8 != 0) {
        if (uVar6 == 0) {
          lVar8 = 0;
        }
        else {
          if (uVar6 == 0) {
            plVar4 = (long *)(lVar5 + 0x1f8);
          }
          else {
            plVar4 = (long *)(lVar5 + 0x30) + uVar6;
            if (0x38 < uVar6) {
              plVar4 = (long *)(lVar5 + 0x30);
            }
          }
          lVar8 = *plVar4;
        }
        if (*(long *)(lVar8 + 0x80) != 0) {
          if (uVar6 != 0) {
            if (uVar6 == 0) {
              plVar4 = (long *)(lVar5 + 0x1f8);
            }
            else {
              plVar4 = (long *)(lVar5 + 0x30) + uVar6;
              if (0x38 < uVar6) {
                plVar4 = (long *)(lVar5 + 0x30);
              }
            }
            goto LAB_014fca64;
          }
          lVar8 = 0;
          goto LAB_014fca68;
        }
      }
    }
LAB_014fcb14:
    if (uVar6 != 0) {
      if (uVar6 == 0) {
        lVar8 = *(long *)(lVar5 + 0x1f8);
      }
      else {
        plVar4 = (long *)(lVar5 + 0x30) + uVar6;
        if (0x38 < uVar6) {
          plVar4 = (long *)(lVar5 + 0x30);
        }
        lVar8 = *plVar4;
      }
      if (lVar8 != 0) {
        if (uVar6 == 0) {
          lVar8 = 0;
        }
        else {
          if (uVar6 == 0) {
            plVar4 = (long *)(lVar5 + 0x1f8);
          }
          else {
            plVar4 = (long *)(lVar5 + 0x30) + uVar6;
            if (0x38 < uVar6) {
              plVar4 = (long *)(lVar5 + 0x30);
            }
          }
          lVar8 = *plVar4;
        }
        if (*(long *)(lVar8 + 0x88) != 0) {
          if (uVar6 != 0) {
            if (uVar6 == 0) goto LAB_014fcc80;
            plVar4 = (long *)(lVar5 + 0x30) + uVar6;
            if (0x38 < uVar6) {
              plVar4 = (long *)(lVar5 + 0x30);
            }
            goto LAB_014fcc84;
          }
          lVar5 = 0;
          goto LAB_014fcc90;
        }
      }
    }
  }
  puVar3 = PTR_DAT_04bbc188;
  uVar6 = *(uint *)(param_1 + 8);
  lVar5 = *(long *)puVar2;
  if (uVar6 == 0) {
    if ((*(long *)(lVar5 + 0x1f8) != 0) && (*(long *)(*(long *)(lVar5 + 0x1f8) + 0x90) != 0)) {
LAB_014fceac:
      plVar4 = (long *)(lVar5 + 0x1f8);
LAB_014fceb0:
      lVar8 = *plVar4;
LAB_014fceb4:
      if ((*(long *)(lVar8 + 0x130) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x130) + 0x18), lVar8 != 0)) {
        uVar1 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
        if (0 < (int)uVar1) {
          if (uVar1 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              lVar5 = uVar7 * 4;
              uVar7 = uVar7 + 2;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5) = *(undefined4 *)puVar3;
              *(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar5 + 4) = *(undefined4 *)puVar3;
            } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
          }
          if ((uVar1 & 1) != 0) {
            *(undefined4 *)(*(long *)(lVar8 + 0x10) + uVar7 * 4) = DAT_0517af58;
          }
          uVar6 = *(uint *)(param_1 + 8);
          lVar5 = *(long *)puVar2;
        }
      }
      if (uVar6 != 0) goto LAB_014fcf70;
    }
    if (*(long *)(lVar5 + 0x1f8) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar5 + 0x1f8) + 0x98) == 0) {
      return;
    }
LAB_014fd0e0:
    plVar4 = (long *)(lVar5 + 0x1f8);
  }
  else {
    if (uVar6 != 0) {
      if (uVar6 == 0) {
        lVar8 = *(long *)(lVar5 + 0x1f8);
      }
      else {
        plVar4 = (long *)(lVar5 + 0x30) + uVar6;
        if (0x38 < uVar6) {
          plVar4 = (long *)(lVar5 + 0x30);
        }
        lVar8 = *plVar4;
      }
      if (lVar8 != 0) {
        if (uVar6 == 0) {
          lVar8 = 0;
        }
        else {
          if (uVar6 == 0) {
            plVar4 = (long *)(lVar5 + 0x1f8);
          }
          else {
            plVar4 = (long *)(lVar5 + 0x30) + uVar6;
            if (0x38 < uVar6) {
              plVar4 = (long *)(lVar5 + 0x30);
            }
          }
          lVar8 = *plVar4;
        }
        if (*(long *)(lVar8 + 0x90) != 0) {
          if (uVar6 != 0) {
            if (uVar6 == 0) goto LAB_014fceac;
            plVar4 = (long *)(lVar5 + 0x30) + uVar6;
            if (0x38 < uVar6) {
              plVar4 = (long *)(lVar5 + 0x30);
            }
            goto LAB_014fceb0;
          }
          lVar8 = 0;
          goto LAB_014fceb4;
        }
      }
    }
LAB_014fcf70:
    if (uVar6 == 0) {
      return;
    }
    if (uVar6 == 0) {
      lVar8 = *(long *)(lVar5 + 0x1f8);
    }
    else {
      plVar4 = (long *)(lVar5 + 0x30) + uVar6;
      if (0x38 < uVar6) {
        plVar4 = (long *)(lVar5 + 0x30);
      }
      lVar8 = *plVar4;
    }
    if (lVar8 == 0) {
      return;
    }
    if (uVar6 == 0) {
      lVar8 = 0;
    }
    else {
      if (uVar6 == 0) {
        plVar4 = (long *)(lVar5 + 0x1f8);
      }
      else {
        plVar4 = (long *)(lVar5 + 0x30) + uVar6;
        if (0x38 < uVar6) {
          plVar4 = (long *)(lVar5 + 0x30);
        }
      }
      lVar8 = *plVar4;
    }
    if (*(long *)(lVar8 + 0x98) == 0) {
      return;
    }
    if (uVar6 == 0) {
      lVar5 = 0;
      goto LAB_014fd0f0;
    }
    if (uVar6 == 0) goto LAB_014fd0e0;
    plVar4 = (long *)(lVar5 + 0x30) + uVar6;
    if (0x38 < uVar6) {
      plVar4 = (long *)(lVar5 + 0x30);
    }
  }
  lVar5 = *plVar4;
LAB_014fd0f0:
  puVar2 = PTR_DAT_04bbc188;
  if ((*(long *)(lVar5 + 0x140) != 0) &&
     (lVar5 = *(long *)(*(long *)(lVar5 + 0x140) + 0x18), lVar5 != 0)) {
    uVar6 = *(int *)(lVar5 + 0xc) * *(int *)(lVar5 + 8);
    if (0 < (int)uVar6) {
      if (uVar6 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          lVar8 = uVar7 * 4;
          uVar7 = uVar7 + 2;
          *(undefined4 *)(*(long *)(lVar5 + 0x10) + lVar8) = *(undefined4 *)puVar2;
          *(undefined4 *)(*(long *)(lVar5 + 0x10) + lVar8 + 4) = *(undefined4 *)puVar2;
        } while (((ulong)uVar6 & 0xfffffffe) != uVar7);
      }
      if ((uVar6 & 1) != 0) {
        *(undefined4 *)(*(long *)(lVar5 + 0x10) + uVar7 * 4) = DAT_0517af58;
        return;
      }
    }
  }
  return;
}

